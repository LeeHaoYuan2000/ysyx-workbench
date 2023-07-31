
#define Device_On           1 //开启Device
#define CONFIG_HAS_TIMER    1 //时钟
#define CONFIG_HAS_SERIAL   1 //串口
#define CONFIG_HAS_VGA      1 //vga
#define CONFIG_HAS_KEYBOARD 1 //键盘

//mmio address
#define CONFIG_SERIAL_MMIO     0xa00003f8
#define CONFIG_RTC_MMIO        0xa0000048
#define CONFIG_I8042_DATA_MMIO 0xa0000060