#ifndef HELP_H
#define HELP_H
#include "ReflowWizard.h"

void showHelp(uint8_t screen);
void drawHelpBorder(uint16_t width, uint16_t height);
void displayHelpLine(char *text);
void eraseHelpScreen(uint16_t width, uint16_t height);
void drawLearningAbortDialog();

#endif
