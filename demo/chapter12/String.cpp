//
// Created by admin on 2021/11/17.
//

#include "String.h"
#include <cstring>
String::String() {

}

String::String(const char *src) {
    len = strlen(src);
    str = new char[len + 1];
    strcpy(str, src);
}

String::String(const String &src) {

}

String::~String() {
    delete[] str;
}

char &String::operator[](int index) {
    return str[index];
}

const char &String::operator[](int index) const {
    return str[index];
}

std::ostream &operator<<(std::ostream &os, const String &obj) {
    os << obj.str << "|" << obj.len;
    return os;
}