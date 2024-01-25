//==============================================
// Name:           Shisir Bastakoti
// Student Number: 1395758221
// Email:          sbastakoti@myseneca.ca
// Section:        NHH
// Date:           2024-1-24
// Workshop:       Workshop2
//==============================================
// StringSet.h
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#ifndef SENECA_STRINGSET_H
#define SENECA_STRINGSET_H
#include<string>
namespace seneca{

class StringSet{
private:
std::string* array{nullptr};
size_t numStrings{0u};
public:
StringSet();
~StringSet();
StringSet(const StringSet &src);
StringSet& operator=(const StringSet &src );
StringSet(StringSet&& src);
StringSet& operator=(StringSet&& src);
StringSet(char* filename);
size_t size();
std::string operator[](size_t);

















};











}






























#endif