#ifndef LEARN_H
#define LEARN_H
#include "ReflowWizard.h"

void learn();
void showLearnedNumbers();
void drawPerformanceBar(boolean redraw, uint8_t percentage);
void displaySecondsLeft(uint32_t overallSeconds, uint32_t phaseSeconds);

#endif
