#ifndef PREFS_H
#define PREFS_H
#include "ReflowWizard.h"

void getPrefs();
void savePrefs();
void checkIfPrefsShouldBeWrittenToFlash();
void writePrefsToFlash();
void factoryReset(boolean saveTouchCalibrationData);

#endif
