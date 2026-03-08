#ifndef OUTPUTS_H
#define OUTPUTS_H
#include "ReflowWizard.h"

extern volatile uint32_t *portAOut, *portAMode, *portBOut, *portBMode;

void initOutputs();
void setOutput(uint8_t outputNumber, boolean state);
boolean getOutput(uint8_t outputNumber);
void setOvenOutputs(boolean elementsOn, boolean convectionFanOn, boolean coolingFanOn);
void turnConvectionFanOn(boolean on);
void turnCoolingFanOn(boolean on);
boolean areOutputsConfigured();
uint8_t numOutputsConfigured();

#endif
