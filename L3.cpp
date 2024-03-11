#include <iostream>
#include "string.hpp"

int main()
{
    str s1("adsaf");
    str s2("qweqwr");
    s1.out();
    s2.out();
    s1 = s2;
    s1.out();
    return 1;
}
