//
// Created by 39535 on 2021/11/24.
//

#include "Worker.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

Worker::~Worker(){}

void Worker::Set() {
    cout << " Enter workers name:";
    getline(cin,fullname);
    cout <<"Enter workers Id:";
    cin >>id;
    while (cin.get() != '\n')
        continue;
}

void Worker::Show() const {
    cout << "Worker name: " << fullname << endl;
    cout << "Worker employee ID: " << id << endl;
}

//waiter method
void Waiter::Set() {
    Worker::Set();
    cout<<"Enter waiters panache rating: " ;
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}

void Waiter::Show() const {
    cout << "Category: waiter\n";
    Worker::Show();
    cout << "Panache rating: " << panache << endl;
}

/*Singer::~Singer() {

}

Waiter::~Waiter() {

}*/

//Singer methods

char* Singer::pv[] = {"other","alto","contralto","soprano",
                      "bass","baritone","tenor"};

void Singer::Set() {
    Worker::Set();
    cout << "Enter number for singer vocal range\n";
    int i;
    for(i = 0; i < Vtypes; i++) {
        cout << i << " : " << pv[i] << "      ";
        if (i % 4 == 3)
            cout << endl;
    }

    if (i % 4 != 0) {
        cout << endl;
    }

    while (cin.get() != '\n')
        continue;
}

void Singer::Show() const {
    cout << "Category singer \n";
    Worker::Show();
    cout << "Vocal range: " << pv[voice] << endl;
}
