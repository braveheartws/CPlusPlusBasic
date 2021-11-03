//
// Created by 39535 on 2021/11/2.
//
#include <iostream>
#include <sstream>
#include <cstdio>
using namespace  std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    using namespace std;
    cin.get();
    signed char a = -1;
    char b = -1;
    int i = -1;
    stringstream  ss;
    ss<<i;
    string str;
    ss>>str;
    const char* h = str.c_str();
    cout << h << endl;
    printf("aa%c\n",h);
    char  ct = u'C';
    printf("aa%s\n",h);
    return 0;
}