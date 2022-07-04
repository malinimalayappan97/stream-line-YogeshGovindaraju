#ifndef BMSPARAMETERREADER
#define BMSPARAMETERREADER

#include <fstream>
#include <string>
#include <vector>
#include <sstream>

struct BmsParameters
{
    std::vector<float> temperatureReadings;
    std::vector<float> stateOfChargeReadings;
    std::vector<float> chargeRateReadings;
};

void collectValues(std::fstream &file, std::vector<float> &values)
{
    std::string line, value;
    while(getline(file, line))
    {
        values.clear();
        std::stringstream str(line);
        while(getline(str, value, ','))
        {
            values.push_back(std::stof(value));
        }
    }
}

std::vector<float> readValuesFromFile(std::string fileName)
{
    std::vector<float> values;
    std::fstream file(fileName, std::ios::in);
    if(file.is_open())
    {
        collectValues(file, values);
    }
    return values;
}

BmsParameters readBmsParameterReadings()
{
    BmsParameters bmsParameters;
    bmsParameters.temperatureReadings = readValuesFromFile("./BMS_SensorReadings/BMS_TemperatureReadings.csv");
    bmsParameters.stateOfChargeReadings = readValuesFromFile("./BMS_SensorReadings/BMS_StateOfChargeReadings.csv");
    bmsParameters.chargeRateReadings = readValuesFromFile("./BMS_SensorReadings/BMS_ChargeRateReadings.csv");
    return bmsParameters;
}

#endif