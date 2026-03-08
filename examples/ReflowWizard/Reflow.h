#ifndef REFLOW_H
#define REFLOW_H
#include "ReflowWizard.h"

void reflow(uint8_t profileNo);
uint16_t getBasePIDPower(double temperature, double increment, uint16_t *bias, uint16_t maxBias);
void showReflowError(uint16_t iconsX, char *line1, char *line2);
void drawReflowAbortDialog();
void drawStopDoneButton(boolean isGraphDisplayed, boolean buttonIsStop);
void drawGraphOutline(uint16_t graphMaxTemp, uint16_t graphMaxSeconds);
void displayReflowDuration(uint32_t seconds, boolean isGraphDisplayed);
void updateStatusMessage(uint16_t token, uint16_t timer, uint16_t temperature, boolean abortDialogIsOnScreen);

#endif
