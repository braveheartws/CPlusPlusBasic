//
// Created by admin on 2021/11/16.
//

#ifndef CPLUSPLUSBASIC_STUDENT_H
#define CPLUSPLUSBASIC_STUDENT_H

namespace ZHANG{
    class Student {
    private:
        int age;
        friend void hello(const Student &stu);
    public:
        Student(int age);
        Student(int age,int ag2);
        Student();
        void show() const;
        Student operator +(const Student& other);
        friend Student operator +(const Student& other,const Student& other1);
    };
}



#endif //CPLUSPLUSBASIC_STUDENT_H
