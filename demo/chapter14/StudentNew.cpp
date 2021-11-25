//
// Created by admin on 2021/11/24.
//

#include "StudentNew.h"
#include <ostream>

double StudentNew::Average() const {
    return ArrayDb::sum() / ArrayDb::size();
}

std::ostream & operator<<(std::ostream & os, const StudentNew& stu) {
    os << "name: " <<(std::string) stu << "\n";
    os << "scores: " << ((std::valarray<double>) stu)[0] << "\n";
    return os;
}

ArrayDb StudentNew::GetArrayDb() {

}

