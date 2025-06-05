#include "cy_eink_library.h"
#include "eink_display.h"
#include "images.h"

void EinkDisplay_Init(void)
{
    cyhal_spi_t spiObj;

    // Ініціалізація E-Ink дисплея (може бути адаптована під твою платформу)
    if (!Cy_EINK_Start(0))
    {
        // Помилка ініціалізації
        CY_ASSERT(0);
    }

    // Очистити дисплей (усі пікселі — білим)
    uint8_t whiteImage[CY_EINK_IMAGE_SIZE];
    Cy_EINK_ImageToFrameBuffer(Cy_EINK_WHITE_FRAME, whiteImage);
    Cy_EINK_ShowFrame(NULL, whiteImage, CY_EINK_FULL_4STAGE, true);
}

void EinkDisplay_Update(uint8_t alertLevel)
{
    const uint8_t* image = NULL;

    switch (alertLevel)
    {
        case 0x00: // No alert
            image = NoAlertImage;
            break;
        case 0x01: // Mild alert
            image = MildAlertImage;
            break;
        case 0x02: // High alert
            image = HighAlertImage;
            break;
        default:
            return;
    }

    if (image != NULL)
    {
        Cy_EINK_ShowFrame(NULL, image, CY_EINK_FULL_4STAGE, true);
    }
}
