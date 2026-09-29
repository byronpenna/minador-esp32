# Minador ESP32-S3 — Solo Miner (RITSA Electrónica)

Sketch de Arduino para un minero solo (SHA-256d) por software sobre un ESP32-S3, usando
una pantalla Waveshare ESP32-S3 LCD 4.3" (800x480 RGB / ST7262 / CH422G).

Proyecto complementario del post [Bitaxe Gamma 600x](https://ritsasv.com/posts/bitaxe-gamma-600x/)
de RITSA Electrónica: mientras se consiguen las piezas del ASIC dedicado, este sketch permite
entender el protocolo Stratum y el flujo completo de minería con hardware mucho más accesible.

## Hardware

- Waveshare ESP32-S3 LCD 4.3" (800x480 RGB / ST7262 / CH422G, sin touch)
- Requiere las librerías `ArduinoJson` (7.x) y `ESP32_Display_Panel`

## Configuración

Antes de subir el sketch, reemplaza estos valores en `900kh.ino`:

```cpp
const char* DEFAULT_WIFI_SSID = "TU_WIFI_SSID";
const char* DEFAULT_WIFI_PASSWORD = "TU_WIFI_PASSWORD";
```

También puedes configurar el Wi-Fi después de flashear, conectándote al punto de acceso
`RITSA-MINER-SETUP` que crea el propio dispositivo.

## Aviso

Es un minero educativo/de lotería de baja potencia, no un ASIC. No esperes minar un bloque
con esto — el valor está en aprender cómo funciona el protocolo de minería.
