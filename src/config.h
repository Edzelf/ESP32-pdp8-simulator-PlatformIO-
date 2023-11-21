// config.h
// Some definitions for the used hardware
// Note that the flash size (4 or 16 MB) should be configured in platformio.ini!

#define MEMBLOCKS     8                     // Number of 4k memory PDP8 blocks, max is 8

#define WIFI_SSID     "SSID1"               // Enter your WiFi credentials here
#define WIFI_PASSWORD "xxxxxxxx"
#define TIMEZONE      "CET-1CEST-2,M3.5.0/02:00:00,M10.5.0/03:00:00"      // Time zone Europe/Amsterdam
//#define TIMEZONE "NZST-12NZDT-13,M10.1.0/02:00:00,M3.3.0/03:00:00"      // Timezone for New Zealand

#define OLEDDISPLAY                         // OLED support

//#define OTA                               // OTA support (only for 16 MB flash)

#define SD_MOSI        23
#define SD_MISO        19
#define SD_SCK         18
#define SD_CS          15                   // CS pin for SD card

#define SDSPEED   4000000                   // SPI bus speed for SD card

#ifdef OLEDDISPLAY                          // SSD1306/SSD1309/SH1106 display
  #define SDA_PIN      21
  #define SCL_PIN      22
  #define RST_PIN      -1                   // Not used
  #define BL_PIN       -1                   // Back light not used
#endif
#ifdef TTGODISPLAY
  #define TFT_MOSI     19                   // MISO not used for TFT
  #define TFT_SCLK     18
  #define TFT_CS        5
  #define TFT_DC       16
  #define BL_PIN        4                   // Back light pin
  #define RST_PIN      -1                   // Not used
#endif


