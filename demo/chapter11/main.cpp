//
// Created by admin on 2021/11/11.
//

#include <iostream>
#include "Time.h"
#include "Student.h"
#include "../chapter12/String.h"

using namespace std;

using namespace ZHANG;

int mainc11() {
    Time time1{5, 30};
    Time time(5, 5);
    Time time2 = Time(5,60);

    Time time3 = time2 + time;
    time3.Show();

    Time time4 = time3 * 305.1;
    Time time5 = 35035.15 * time3;
    cout << time4 <<"sss" << endl;
    Student student = Student(15);
    student.show();
    hello(student);
    cout << time5;

    Student st1;
    st1 = 15;
    st1.show();




    return 0;
}