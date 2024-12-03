# ESP32CAM with ESP-IDF Project

This project ports [Ai-Thinker-Open_ESP32-CAMERA_LAN](https://github.com/Ai-Thinker-Open/Ai-Thinker-Open_ESP32-CAMERA_LAN) to the latest [ESP-IDF v5.3.1](https://github.com/espressif/esp-idf/releases/tag/v5.3.1).

## Features

- Verified on ESP32CAM with OV2640 camera module
- Supports Freenove ESP32-S3 WROOM camera board
- Currently supports WIFI_AP mode only

## Development Environment

- **Operating System**: Ubuntu 22.04
- **ESP-IDF Version**: v5.3.1
- **Hardware**:
  - ESP32CAM (main branch)
  - Freenove ESP32-S3 WROOM (freenoveS3 branch)

## Hardware Support

### ESP32CAM (main branch)
- Original ESP32 based camera board
- OV2640 camera module

### Freenove ESP32-S3 WROOM (freenoveS3 branch)
- ESP32-S3 based camera board
- 8MB PSRAM in OCT mode
- OV2640 camera module
- Enhanced stack configuration for better stability

## Getting Started

### Prerequisites

- Install ESP-IDF v5.3.1 following the [official installation guide](https://docs.espressif.com/projects/esp-idf/en/v5.3.1/esp32/get-started/index.html)

### Installation and Build

1. Clone the repository:
   ```
   git clone https://github.com/KunYi/esp32cam.git
   cd esp32cam
   ```

2. Select the appropriate branch:
   ```
   # For ESP32CAM
   git checkout main

   # For Freenove ESP32-S3 WROOM
   git checkout freenoveS3
   ```

3. Set up the ESP-IDF environment:
   ```
   . $HOME/esp/esp-idf/export.sh
   ```

4. Build the project:
   ```
   idf.py build
   ```

5. Flash the firmware:
   ```
   idf.py -p <YOUR_PORT> flash
   ```

6. (Optional) Monitor the serial output:
   ```
   idf.py -p <YOUR_PORT> monitor
   ```

For more details, check the [build log](./log/build.log) and [flash log](./log/flash.log).

## Connecting to the Board

After flashing the firmware, the board will create a Wi-Fi access point. You can connect to it using a web browser:

1. Look for the SSID `esp32cam` in your Wi-Fi settings and connect to it.
   - Password: `esp32cam`

2. Once connected, open a web browser and navigate to either:
   - For ESP32CAM: `http://AI-THINKER-OV2640-<BOARD_MAC_ADDRESS>.local`
   - For Freenove S3: `http://FREENOVE-S3WROOM-OV2640-<BOARD_MAC_ADDRESS>.local`
   - Or directly: `http://192.168.4.1`

### Example UART Log (Freenove S3)

```
I (1501) esp32cam: wifi_init_softap finished. SSID:esp32cam password:esp32cam channel:1
I (1501) esp_netif_lwip: DHCP server started on interface WIFI_AP_DEF with IP: 192.168.4.1
I (1511) camera_httpd: Starting web server on port: '80'
I (1521) camera_httpd: Starting stream server on port: '81'
I (1531) camera mdns: FREENOVE-S3WROOM-OV2640-009504.local
I (1541) base MAC address: 24:EC:4A:00:95:04
```

## Contributing

Contributions to this project are welcome. Please feel free to submit issues and pull requests.

## License

MIT

## Acknowledgments

- [Ai-Thinker-Open](https://github.com/Ai-Thinker-Open) for the original ESP32-CAMERA_LAN project
- [Espressif Systems](https://github.com/espressif) for the ESP-IDF framework
- [Freenove](https://github.com/Freenove) for the ESP32-S3 WROOM camera board
