#ifndef READPROFILES_H
#define READPROFILES_H
#include "ReflowWizard.h"

void ReadProfilesFromSDCard();
char *tokenToText(char *str, uint8_t token, uint16_t *numbers);
uint16_t getNextTokenFromFlash(char *str, uint16_t *num);
void deleteProfile(uint8_t num);
boolean writeTokenBufferToFlash(boolean endOfProfile);
uint8_t getNumberOfProfiles();
void sortProfiles(void);
boolean getNumberFromFile(File file, uint16_t *num);
void saveTokenAndNumbersToFlash(uint8_t token, uint16_t *numbers, uint8_t numOfNumbers);
boolean getStringFromFile(File file, char *strBuffer, uint8_t maxLength);
void saveTokenAndStringToFlash(uint16_t token, char *str);
uint16_t getFreeProfileBlock();
void initProfileWriteToFlash(uint16_t startingBlock);
void deleteProfileByName(char *profileName);
uint8_t hasTokenBeenFound(char c);
void processDirectory(File dir);
void processFile(File file);
void initTokenPtrs();

#endif
