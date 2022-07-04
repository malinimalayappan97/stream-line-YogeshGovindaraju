#ifndef BMSMAIN
#define BMSMAIN

#include <iostream>
#include "BmsParameterReader.h"
#include "BmsDataProcessor.h"
#include "BmsResult.h"

void processBmsParametersFromSensorToConsole(BmsParameters (*readBmsParameterReadings)(), void (*sendDataToConsole)(std::string));

#endif