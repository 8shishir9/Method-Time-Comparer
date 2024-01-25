//==============================================
// Name:           Shisir Bastakoti
// Student Number: 1395758221
// Email:          sbastakoti@myseneca.ca
// Section:        NHH
// Date:           2024-1-24
// Workshop:       Workshop2
//==============================================
// StringSet.cpp
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#include <fstream>
#include <iostream>
#include "StringSet.h"


namespace seneca{

StringSet::StringSet(){}
StringSet::~StringSet(){

if(array!=nullptr){
    delete[] array;
    array=nullptr;
}
};

StringSet::StringSet(const StringSet &src){
*this=src;
}

StringSet& StringSet::operator=(const StringSet &src ){
if (&src!=this){
if(this->array){
  delete[] array;
    array=nullptr;  

}

this->numStrings=   src.numStrings;

array=new std::string[src.numStrings];
for(size_t i=0u;i<numStrings;i++){
    this->array[i]=src.array[i];
}

}


return *this;
}

StringSet::StringSet(char* filename){
std::ifstream f(filename);
if (!f.is_open()) {
    std::cout << "File is not open" << std::endl;
} else {
    std::string temp;

       while(std::getline(f,temp,' ')){
            numStrings++;
       }
    array=new std::string[numStrings];
    f.clear();
f.seekg(0, std::ios::beg);
     size_t i{0};
    while (getline(f,array[i],' ')){
        i++;
    }                                               
    
    }
    f.close();
}
   
size_t StringSet::size(){

return numStrings;

}

std::string StringSet::operator[](size_t i){
if(i>=numStrings){
    return "";
}else{
return array[i];
}
}
StringSet::StringSet(StringSet&& src){
*this=std::move(src);

}
StringSet& StringSet::operator=(StringSet&& src){
if(this!=&src){
delete [] array;
array=src.array;
numStrings=src.numStrings;
src.array=nullptr;
src.numStrings=0;

}
return *this;
}
}