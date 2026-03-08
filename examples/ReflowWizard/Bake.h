#ifndef BAKE_H
#define BAKE_H
#include "ReflowWizard.h"

void bake();
void DumpDataToUSB(uint16_t duration, float temperature, int duty, int integral);
void displayBakeTemperatureAndDuration(boolean displayCelsius);
uint32_t getBakeSeconds(uint16_t duration);
void displayBakePhase(uint8_t phase, boolean abortDialogIsOnScreen);
void drawBakingAbortDialog();
void displayBakeSecondsLeft(uint32_t seconds);

#endif
