#include <iostream>
#include "string.hpp"

str::str(const char* str)
{
    int l = strlen(str);
    _str = new char[l + 1];

    for (int i = 0; i < l; i++)
    {
        _str[i] = str[i];
    }
    _str[l] = '\0';
}

str::str(const str & second)
{
    int l = strlen(second._str);
    _str = new char[l + 1];

    for (int i = 0; i < l; i++)
    {
        _str[i] = second._str[i];
    }
    _str[l] = '\0';
}

str& str::operator=(const str & second)
{
    delete[] _str;
    int l = strlen(second._str);
    _str = new char[l + 1];

    for (int i = 0; i < l; i++)
    {
        _str[i] = second._str[i];
    }

    _str[l] = '\0';

    return *this;
}

void str::out()
{
    std::cout << _str << std::endl;
}

str::~str()
{
    delete[] _str;
}
