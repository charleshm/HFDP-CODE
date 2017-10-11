#ifndef _CURRENT_CONDITIONS_DISPLAY_H
#define _CURRENT_CONDITIONS_DISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"

namespace weather {

class CurrentConditionsDisplay : public Observer, public DisplayElement{
public:
    CurrentConditionsDisplay(Subject* weatherData) : _weatherData(weatherData) {
        weatherData->registerObserver(this);
    }

    void update(float temperature, float humidity, float pressure) {
        _temperature = temperature;
        _humidity = humidity;
        display();
    }

    void display() {
        std::cout << "Current conditions: " << _temperature
                << "F degrees and " << _humidity << "% humidity" << std::endl;
    }
private:
    float _temperature;
    float _humidity;
    Subject* _weatherData;
};

}//namespace weather

#endif