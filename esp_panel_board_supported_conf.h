/*
 * ESP32 Display Panel
 * Configuracion para Waveshare ESP32-S3 LCD 4.3"
 *
 * Pantalla: 800x480
 * Placa seleccionada: ESP32-S3-Touch-LCD-4.3
 *
 * NOTA:
 * El touch se desactivara en la configuracion de la placa,
 * NO en este archivo.
 */

#pragma once

// ============================================================
// USAR CONFIGURACION DE PLACA SOPORTADA
// ============================================================

#define ESP_PANEL_BOARD_DEFAULT_USE_SUPPORTED (1)

#if ESP_PANEL_BOARD_DEFAULT_USE_SUPPORTED

// ============================================================
// WAVESHARE ESP32-S3 LCD 4.3"
// ============================================================

// Esta es NUESTRA placa:
#define BOARD_WAVESHARE_ESP32_S3_TOUCH_LCD_4_3

// IMPORTANTE:
// No activar ninguna otra placa.
// Especialmente NO activar la 4.3B.

// #define BOARD_WAVESHARE_ESP32_S3_TOUCH_LCD_4_3_B

// ============================================================
// VERSION DEL ARCHIVO
// NO MODIFICAR
// ============================================================

#define ESP_PANEL_BOARD_SUPPORTED_FILE_VERSION_MAJOR 1
#define ESP_PANEL_BOARD_SUPPORTED_FILE_VERSION_MINOR 3
#define ESP_PANEL_BOARD_SUPPORTED_FILE_VERSION_PATCH 0

#endif