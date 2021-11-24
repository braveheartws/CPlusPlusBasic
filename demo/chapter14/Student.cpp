//
// Created by admin on 2021/11/23.
//

#include "Student.h"

double Student::Average() const {
    if (scores.size() > 0) {
        return scores.sum() / scores.size();
    } else
        return 0;
}

const std::string &Student::GetName() const {

}

std::istream &operator>>(std::istream &is, Student &stu) {

}

std::istream &getline(std::istream &is, Student &stu) {

}

std::ostream &operator<<(std::ostream &os, const Student &stu) {

}

