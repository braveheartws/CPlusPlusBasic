//
// Created by admin on 2021/11/17.
//

#ifndef CPLUSPLUSBASIC_STRING_H
#define CPLUSPLUSBASIC_STRING_H
#include <ostream>

class String {
private:
    int len;
    char *str;
    static int instance;
public:
    String();
    String(const char *);
    String(const String&);
    ~String();
    char& operator[](int index);
    const char& operator[](int index) const;
    friend std::ostream& operator<<(std::ostream&, const String&);
};


#endif //CPLUSPLUSBASIC_STRING_H
