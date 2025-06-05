from PIL import Image
from bleak import BleakClient
import asyncio

# UUID сервісу і характеристики (мають збігатись з тими, що в PSoC)
IMAGE_SERVICE_UUID = "0000FFFF-0000-1000-8000-00805F9B34FB"
IMAGE_CHAR_UUID    = "0000FF01-0000-1000-8000-00805F9B34FB"

# Адреса BLE пристрою (PSoC), наприклад: 'C3:61:3F:12:34:56'
BLE_ADDRESS = "XX:XX:XX:XX:XX:XX"  # <- впиши тут свою

# Розмір дисплея
WIDTH = 296
HEIGHT = 128

def image_to_bytes(image_path):
    img = Image.open(image_path)
    img = img.resize((WIDTH, HEIGHT)).convert("1")  # 1-бітне зображення

    pixels = img.getdata()
    packed = bytearray()

    for y in range(HEIGHT):
        for x in range(0, WIDTH, 8):
            byte = 0
            for b in range(8):
                if x + b < WIDTH:
                    pixel = pixels[y * WIDTH + x + b]
                    if pixel == 255:
                        bit = 1  # Білий
                    else:
                        bit = 0  # Чорний
                    byte |= (bit << (7 - b))
            packed.append(byte)

    return packed

async def send_image():
    img_data = image_to_bytes("image.png")  # 4736 байт

    async with BleakClient(BLE_ADDRESS) as client:
        print("Підключення до пристрою...")
        for i in range(0, len(img_data), 20):
            chunk = img_data[i:i+20]
            await client.write_gatt_char(IMAGE_CHAR_UUID, chunk)
        print("Зображення передано!")

if __name__ == "__main__":
    asyncio.run(send_image())
