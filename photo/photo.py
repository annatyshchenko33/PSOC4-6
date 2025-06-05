from PIL import Image
import numpy as np
def resize_image(input_image_path, output_image_path, size):
    original_image = Image.open(input_image_path)
    width, height = original_image.size
    ratio = width / height # зберігаємо пропорці
    if ratio > 1:
        new_width = size[0]
        new_height = int(new_width / ratio)
    else:
        new_height = size[1]
        new_width = int(new_height * ratio)
    resized_image = original_image.resize((new_width, new_height))
    bw_resized_image = resized_image.convert('1') # перетворюємо зображення в чорно-біле
    bw_resized_image.save(output_image_path)
    image_data = np.asarray(bw_resized_image)
    with open('NoAlertImage.txt.txt','w') as f:
        for row in image_data:
            f.write('{')
            f.write(','.join('1' if pixel else '0' for pixel in row))
            f.write('},\n')
    array_size = image_data.shape
    print(f"Розмір масиву: {array_size}")
resize_image('noalert.jpg', 'NoAlert.jpg', (264, 176))