#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

using weather::WeatherData;
using weather::CurrentConditionsDisplay;

int main() {
    WeatherData* weatherData = new WeatherData();
    CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weatherData);

    weatherData->setMeasurements(80, 65, 30.4);
}