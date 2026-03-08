#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include "ReflowWizard.h"

void initTemperature();
void takeCurrentThermocoupleReading();
float getCurrentTemperature();
char *getTemperatureString(char *str, float temperature, boolean displayInCelsius);

#endif
