//
// Created by 39535 on 2021/11/16.
//

#ifndef CPLUSPLUSBASIC_STRINGBAD_H
#define CPLUSPLUSBASIC_STRINGBAD_H

#include <iostream>

namespace Zhang {
    class StringBad {
        int len;
        static int obj_count;
    public:
        char *str;
        StringBad();
        StringBad(const StringBad& sb);
        StringBad(const char *s);
        ~StringBad();
        friend std::ostream& operator<<(std::ostream&, const StringBad &);
    };

}


#endif //CPLUSPLUSBASIC_STRINGBAD_H
