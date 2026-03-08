#ifndef SERVO_H
#define SERVO_H
#include "ReflowWizard.h"

void initializeTimer();
void setServoPosition(uint8_t servoDegrees, uint16_t timeToTake);
uint16_t degreesToTimerCounter(uint8_t servoDegrees);

#endif
