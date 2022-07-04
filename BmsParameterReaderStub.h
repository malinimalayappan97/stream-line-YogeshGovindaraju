#ifndef BMSPARAMETERREADERSTUB
#define BMSPARAMETERREADERSTUB

BmsParameters readBmsParameterReadingsStub1()
{
    BmsParameters bmsParameters;
    bmsParameters.temperatureReadings = {};
    bmsParameters.stateOfChargeReadings = {};
    bmsParameters.chargeRateReadings = {};
    return bmsParameters;
}

BmsParameters readBmsParameterReadingsStub2()
{
    BmsParameters bmsParameters;
    bmsParameters.temperatureReadings = {10, -5, 44, 56, 6, 83};
    bmsParameters.stateOfChargeReadings = {50, 64, 15, 89, 3, 99, 65, 78, 38};
    bmsParameters.chargeRateReadings = {0.56, 0.12, 0.9};
    return bmsParameters;
}

BmsParameters readBmsParameterReadingsStub3()
{
    BmsParameters bmsParameters;
    bmsParameters.temperatureReadings = {45, 0, -1, 46, 25, 59, 16, 7};
    bmsParameters.stateOfChargeReadings = {74, 26, 20, 80, 10, 97, 37, 2};
    bmsParameters.chargeRateReadings = {0.8, 0.5, 0, 0.512, 0.784, 0.35, 0.99, 0.4};
    return bmsParameters;
}

#endif