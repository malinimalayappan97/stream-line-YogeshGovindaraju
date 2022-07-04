#include "BmsMain.h"
#include "TestBmsDataProcessor.h"

void processBmsParametersFromSensorToConsole(BmsParameters (*readBmsParameterReadings)(), void (*sendDataToConsole)(std::string))
{
    BmsParameters bmsParameters = (*readBmsParameterReadings)();
    std::string readings = processBmsData(bmsParameters);
    (*sendDataToConsole)(readings);
}

int main()
{
    processBmsParametersFromSensorToConsole(&readBmsParameterReadings, &sendDataToConsole);
    testBmsData();
    return 0;
}