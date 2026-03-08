#ifndef TOUCH_H
#define TOUCH_H
#include "ReflowWizard.h"

void CalibrateTouchscreen();
void debounce();
void quickDebounce();
void sendTouchCalibrationData();
void clearTouchTargets();
void setTouchIntervalCallback(void (*f)(), uint16_t interval);
void setTouchTemperatureUnitChangeCallback(void (*f)(boolean displayInCelsius));
void defineTouchArea(uint16_t x, uint16_t y, uint16_t w, uint16_t h);
int8_t getTap(uint8_t mode);
void displayTemperatureInHeader();
void drawCrosshairs(uint16_t x, uint16_t y, boolean draw);
void calibrationDebounce();
void touchCallback();
void takeScreenshot();

#endif
