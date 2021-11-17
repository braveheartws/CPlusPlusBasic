//
// Created by 39535 on 2021/11/16.
//

#include "StringBad.h"
#include <cstring>

using namespace Zhang;
using namespace std;

int StringBad::obj_count = 0;

StringBad::StringBad() {
    len = 4;
    str = new char[len];
    strcpy(str,"C++");
    ++obj_count;
    cout << obj_count << "   :  \n";
}

StringBad::StringBad(const StringBad &sb) {
    len = sb.len;
    str = new char[len + 1];
    strcpy(str, sb.str);
    cout << "COPY  constructor" << endl;
}

StringBad::StringBad(const char *s) {
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str,s);
    ++obj_count;
    cout << obj_count << "   :  \n";
}

StringBad::~StringBad() {
    --obj_count;
    cout << obj_count << "   :  \n";
    delete [] str;
}


ostream& operator<<(ostream &os, const StringBad &other) {
    os<<other.str;
    return os;
}

