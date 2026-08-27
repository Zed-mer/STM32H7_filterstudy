# STM32H7 DDS9910 Project

STM32H7 firmware project with DDS9910-related application code.

## Project Layout

- `Core/`: STM32 application and startup sources.
- `Hardware/`: board-specific peripheral code.
- `Drivers/`: STM32 HAL, CMSIS, and supporting drivers.
- `MDK-ARM/stm32h7_dds9910.uvprojx`: Keil MDK project entry.
- `stm32h7_dds9910.ioc`: STM32CubeMX configuration.

Open the `.uvprojx` file in Keil MDK. Generated build products are excluded
from version control and can be recreated from the source project.
