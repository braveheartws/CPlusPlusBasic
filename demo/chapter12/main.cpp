//
// Created by 39535 on 2021/11/16.
//
#include <iostream>
#include "StringBad.h"
#include "String.h"
#include <cstring>
#include <cstdlib>
#include "Empty.h"
using namespace std;

Empty getEmpty() {
    Empty empty;
    return empty;
}

int mainc12() {
    /*using namespace Zhang;
    StringBad sb = StringBad("zhangjunpu");
    StringBad sb1 = StringBad("wintersweett");

    StringBad sb3 = sb1;
    StringBad sb4 = StringBad(sb3);
    StringBad sb5(sb4);
    StringBad* sb6 = new StringBad(sb5);*/

    String string1("abcdefg");

    std::cout << string1[2]<<std::endl;

    char ch[] = "-1";
    cout << sizeof(ch) <<endl;
    cout << strlen(ch) << endl;


    char buf[10];
    strcpy_s(buf,10,"-1");
    int i = atoi(buf);
    cout << i << endl;

    char *bbuf = new char[50];
    String *s1, *s2;

    s1 = new (buf) String;

    return 0;
}
