#include <iostream>

class str
{
    char* _str;

public:
    str(const char* str) //констурктор
    {
        int l = strlen(str);
        _str = new char[l+1];

        for (int i = 0; i < l; i++)
        {
            _str[i] = str[i];
        }
        _str[l] = '\0';
    }

    str(const str& second) //констурктор
    {
        int l = strlen(second._str);
        _str = new char[l+1];

        for (int i = 0; i < l; i++)
        {
            _str[i] = second._str[i];
        }
        _str[l] = '\0';
    }

    void out()
    {
        std::cout << _str << std::endl;
    }
};




int main()
{
    str s1("adsaf");
    str s2("qweqwr");
    s1.out();
    s2.out();
    return 1;
}
