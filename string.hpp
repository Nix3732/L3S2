#pragma once
#include <iostream>
class str
{
    char* _str;

public:
    str(const char* str) //констурктор
    {
        int l = strlen(str);
        _str = new char[l + 1];

        for (int i = 0; i < l; i++)
        {
            _str[i] = str[i];
        }
        _str[l] = '\0';
    }

    str(const str& second) //констурктор 2
    {
        int l = strlen(second._str);
        _str = new char[l + 1];

        for (int i = 0; i < l; i++)
        {
            _str[i] = second._str[i];
        }
        _str[l] = '\0';
    }

    str& operator=(const str& second)
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

    void out() //Вывод
    {
        std::cout << _str << std::endl;
    }

    ~str() //деструктор
    {
        delete[] _str;
    }
};