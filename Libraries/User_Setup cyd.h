 
#define USER_SETUP_ID 888

// === АРХИТЕКТУРА И ДРАЙВЕР ===
#define ESP32_S3             // Указываем архитектуру S3
#define ILI9341_DRIVER       // Драйвер дисплея

#define TFT_WIDTH  240       
#define TFT_HEIGHT 320

#define TFT_RGB_ORDER TFT_BGR
#define TFT_INVERSION_OFF    // Для кастомных дисплеев инверсию лучше выключить

// === НАСТРОЙКА ПОДСВЕТКИ ===
#define TFT_BL   21            
#define TFT_BACKLIGHT_ON HIGH  

// === НАСТРОЙКА ПИНОВ ЭКРАНА И ТАЧСКРИНА ===
#define TFT_MISO 12  // Экран SDO / Тач DO
#define TFT_MOSI 13  // Экран SDI / Тач DIN
#define TFT_SCLK 14  // Экран SCK / Тач CLK

#define TFT_CS   15  // Chip Select экрана
#define TFT_DC    2  // Data/Command (RS)
#define TFT_RST  -1  // Reset на кнопку RST платы

#define TOUCH_CS 33  // Отдельный Chip Select тачскрина

// === СКОРОСТЬ SPI ===
#define SPI_FREQUENCY        40000000 // Стабильные 40 МГц для вывода графики
#define SPI_READ_FREQUENCY   20000000
#define SPI_TOUCH_FREQUENCY   2500000 // Обязательно для корректного опроса XPT2046

// === ШРИФТЫ ===
#define LOAD_GLCD   
#define LOAD_FONT2  
#define LOAD_FONT4  
#define SMOOTH_FONT
