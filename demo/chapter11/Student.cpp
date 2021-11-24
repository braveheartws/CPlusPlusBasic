//
// Created by admin on 2021/11/16.
//

#include "Student.h"
#include <iostream>

namespace ZHANG{
    void Student::show() const {

    }

    void hello(const Student& stu) {
        stu.age;
    }

    Student::Student(int age) {
        using namespace std;
        std::cout << age << endl;
    }

    Student::Student(int age, int ag2) {

    }

    Student::Student() {

    }
    Student Student::operator+(const Student &other) {
        return *this;
    }

    Student operator+(const Student& other,const Student& other1) {
        return Student{other.age + other1.age};
    }
}