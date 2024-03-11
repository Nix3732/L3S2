#pragma once
#include <iostream>
class str
{
    char* _str;

public:
    str(const char* str); //констурктор

    str(const str& second); //констурктор 2
    
    str& operator=(const str& second);

    void out(); //Вывод
    
    ~str(); //деструктор

};