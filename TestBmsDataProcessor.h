#ifndef TESTBMSDATAPROCESSOR
#define TESTBMSDATAPROCESSOR

#include <assert.h>
#include "BmsParameterReaderStub.h"
#include "BmsResultStub.h"

void testForEmptyReadings()
{
    std::string expectedOutput = "\nReadings are not available!!!";
    processBmsParametersFromSensorToConsole(&readBmsParameterReadingsStub1, &sendDataToConsoleStub);
    assert(resultStub == expectedOutput);
}

void testForDifferentNumberOfReadings()
{
    std::string expectedOutput = "\nTemperatureReadings,StateOfChargeReadings,ChargeRateReadings\n10,50,0.56\n-5,64,0.12\n44,15,0.9";
    processBmsParametersFromSensorToConsole(&readBmsParameterReadingsStub2, &sendDataToConsoleStub);
    assert(resultStub == expectedOutput);
}

void testForEqualNumberOfReadings()
{
    std::string expectedOutput = "\nTemperatureReadings,StateOfChargeReadings,ChargeRateReadings\n45,74,0.8\n0,26,0.5\n-1,20,0\n46,80,0.512\n25,10,0.784\n59,97,0.35\n16,37,0.99\n7,2,0.4";
    processBmsParametersFromSensorToConsole(&readBmsParameterReadingsStub3, &sendDataToConsoleStub);
    assert(resultStub == expectedOutput);
}

void testBmsData()
{
    testForEmptyReadings();
    testForDifferentNumberOfReadings();
    testForEqualNumberOfReadings();
}

#endif