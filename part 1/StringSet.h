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

StringSet(char* filename);
size_t size();
std::string operator[](size_t);

















};











}






























#endif