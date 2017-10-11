#ifndef _WEATHER_DATA_H
#define _WEATHER_DATA_H

#include "Subject.h"
#include "Observer.h"
#include <set>

namespace weather {

class WeatherData : public Subject {
public:
    WeatherData() = default;

    void registerObserver(Observer* o) {
        _observers.insert(o);
    }

    void removeObserver(Observer* o) {
        auto iter = _observers.find(o);
        if (iter != _observers.end()) {
            _observers.erase(iter);
        }
    }

    void notifyObservers() {
        for (auto iter = _observers.begin(); iter != _observers.end(); ++iter) {
            Observer* observer = (*iter);
            if (observer != NULL) {
                (*iter)->update(_temperature, _humidity, _pressure);
            }
        }
    }

    void measurementsChanged() {
        notifyObservers();
    }

    void setMeasurements(float temperature, float humidity, float pressure) {
        _temperature = temperature;
        _humidity = humidity;
        _pressure = pressure;

        measurementsChanged();
    }
private:
    std::set<Observer*> _observers;
    float _temperature;
    float _humidity;
    float _pressure;
};

}//namespace weather

#endif