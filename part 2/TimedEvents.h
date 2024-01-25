//==============================================
// Name:           Shisir Bastakoti
// Student Number: 1395758221
// Email:          sbastakoti@myseneca.ca
// Section:        NHH
// Date:           2024-1-24
// Workshop:       Workshop2
//==============================================
// TimedEvents.h
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#ifndef SENECA_TIMEDEVENTS_H
#define SENECA_TIMEDEVENTS_H
#include <chrono>
#include<string>

namespace seneca{


  struct Event{
        std::string eventName;
        std::string unit;
        std::chrono::steady_clock::duration duration;

 } ;
class TimedEvents{
private:
            size_t numRecords=0;
            std::chrono::steady_clock::time_point startTime;
            std::chrono::steady_clock::time_point endTime;
            Event events[10];

public:
TimedEvents();
void startClock();
void stopClock();
void addEvent(const char *eventName);
friend std::ostream& operator<<(std::ostream&,TimedEvents& t);
};
}


#endif