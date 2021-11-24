//
// Created by admin on 2021/11/23.
//

#ifndef CPLUSPLUSBASIC_STUDENT_H
#define CPLUSPLUSBASIC_STUDENT_H

#include <string>
#include <valarray>

class Student {

private:
    typedef std::valarray<int> ArrayDb;
    std::string name;
    ArrayDb scores;

    std::ostream &arr_out(std::ostream &os) const;

public:
    Student() : name("Null Student"), scores() {}

    explicit Student(const std::string &s) : name(s), scores() {}

    explicit Student(int n) : name("Null Student"), scores(n) {}

    Student(const std::string &s, int n) : name(s), scores(n) {}

    Student(const std::string &s, const ArrayDb &db) : name(s), scores(db) {}

    Student(const char * & s,const int * d, int n):name(s), scores(d,n) {}

    ~Student();

    double Average() const;
    const std::string & GetName() const;
    int& operator[](int index);
    int operator[](int index) const;

    //input
    friend std::istream & operator>>(std::istream& is,Student &stu);

    friend std::istream & getline(std::istream& is,Student &stu);

    friend std::ostream & operator << (std::ostream &os, const Student &stu);
};


#endif //CPLUSPLUSBASIC_STUDENT_H
