//
// Created by 39535 on 2021/11/16.
//
#include <iostream>
#include "StringBad.h"

int main() {
    using namespace Zhang;
    StringBad sb = StringBad("zhangjunpu");
    StringBad sb1 = StringBad("wintersweett");

    StringBad sb3 = sb1;
    StringBad sb4 = StringBad(sb3);
    StringBad sb5(sb4);
    StringBad* sb6 = new StringBad(sb5);

    return 0;
}
