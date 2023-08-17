//Difftest 的开关
//#define Difftest_On         1

//verilator 仿真波形开关
//#define Simulation_On       1


//控制设备的开关
#define CONFIG_DEVICE       1
#define Device_On           1 //开启Device
#define CONFIG_HAS_TIMER    1 //时钟
#define CONFIG_HAS_SERIAL   1 //串口
#define CONFIG_HAS_VGA      1 //vga
#define CONFIG_HAS_KEYBOARD 1 //键盘

//config set
#define CONFIG_VGA_SIZE_400x300 1

//mmio address
#define CONFIG_SERIAL_MMIO      0xa00003f8
#define CONFIG_RTC_MMIO         0xa0000048
#define CONFIG_I8042_DATA_MMIO  0xa0000060
#define CONFIG_VGA_CTL_MMIO     0xa0000100
#define CONFIG_FB_ADDR          0xa1000000