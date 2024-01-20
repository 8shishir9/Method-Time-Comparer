#include <iostream>
#include <iomanip>
#include "TimedEvents.h"


namespace seneca{

    TimedEvents::TimedEvents()
    {
    }


void TimedEvents::addEvent(const char eventName[]){

   events[numRecords+1].eventName=eventName;
   events[numRecords+1].unit="nanoseconds";
   events[numRecords+1].duration=std::chrono::duration_cast<std::chrono::nanoseconds>(endTime-startTime);



}
void TimedEvents::startClock(){
startTime=std::chrono::steady_clock::now();



}
void TimedEvents::stopClock(){
endTime=std::chrono::steady_clock::now();

}

std::ostream& operator<<(std::ostream& out,TimedEvents& t){
std::cout <<"Execution Times:\n--------------------------\n";
for(Event e:t.events){
    std::cout<<std::setw(21)<<std::left<<e.eventName<<" "<<std::setw(13)<<std::right<<e.duration.count()<<" "<<e.unit<<
"\n";
}
std::cout<<"--------------------------";
return out;
}


}