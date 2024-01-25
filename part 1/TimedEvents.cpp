#include <iostream>
#include <iomanip>
#include "TimedEvents.h"


namespace seneca{

    TimedEvents::TimedEvents()
    {
    }


void TimedEvents::addEvent(const char* eventName){

   events[numRecords].eventName=eventName;
   events[numRecords].unit="nanoseconds";
   events[numRecords].duration=std::chrono::duration_cast<std::chrono::nanoseconds>(endTime-startTime);
numRecords++;


}
void TimedEvents::startClock(){
startTime=std::chrono::steady_clock::now();



}
void TimedEvents::stopClock(){
endTime=std::chrono::steady_clock::now();

}

std::ostream& operator<<(std::ostream& out,TimedEvents& t){
  std::cout<<"--------------------------\n";
std::cout <<"Execution Times:\n--------------------------\n";
/*for(Event e:t.events){
    std::cout<<std::setw(21)<<std::left<<e.eventName<<" "<<std::setw(13)<<std::right<<e.duration.count()<<" "<<e.unit<<
"\n";
}
std::cout<<"--------------------------";
return out;*/
for (auto i = 0u; i < t.numRecords; ++i) {
      std::cout << std::setw(21) << std::left << t.events[i].eventName;
      std::cout << std::setw(13) << std::right << t.events[i].duration.count();
      std::cout << " " << t.events[i].unit << std::endl;
    }
    std::cout<<"--------------------------\n";
    return out;
}


}