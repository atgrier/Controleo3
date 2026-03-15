#ifndef SCREENS_H
#define SCREENS_H
#include "ReflowWizard.h"

void showScreen(uint8_t _screen);
void drawTouchButton(uint16_t x, uint16_t y, uint16_t width, uint16_t textWidth, boolean useLargeFont, char *text);
void eraseHeader();
void displayHeader(char *text, boolean isSetting);
void drawThickRectangle(uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint8_t thickness, uint16_t color);
void testOutputIconAnimator();
uint8_t mapValue(uint16_t value, uint16_t map[]);
void drawTestOutputIcon(uint8_t type, boolean outputIsOn);
void drawIncreaseDecreaseTapTargets(uint8_t targetType);
void drawNavigationButtons(boolean addRightArrow, boolean largeTargets);
uint32_t getFreeRAM();
void checkFreeMemory();

#endif
