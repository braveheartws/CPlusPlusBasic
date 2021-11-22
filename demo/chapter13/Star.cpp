//
// Created by admin on 2021/11/19.
//

#include "Star.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
Star::Star(const char *c) {
    using namespace std;
    cout << "Star chddd" <<endl;
    int len = strlen(c);
    str = static_cast<char *>(malloc(sizeof(char) * len + 1));
    free(str);
}
Star::Star() {
    using namespace std;
    cout << "Star" <<endl;
}