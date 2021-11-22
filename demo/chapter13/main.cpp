//
// Created by admin on 2021/11/17.
//

#include "Cat.h"
#include "BrassPlus.h"
#include "Father.h"
#include "Child.h"
#include "Star.h"
#include "Car.h"
#include "Benz.h"
#include <cstring>


int main() {
    using namespace std;

    BrassPlus brassPlus("zhang",550,5.5,5.5,153.515);
    Brass* brss[2];
    brss[0] = new Brass("father", 5,5);
    brss[1] = new BrassPlus("father", 5,5,500,0.5321);

    (*brss)->ViewAcct();
    (*(brss+1))->ViewAcct();
    delete brss[0];
    delete brss[1];

    Child child(0);

    int a = 3;
    int b = a;
    b = 5;
    cout << a << endl;
    cout << b << endl;

    char ch[] = "123456";
    Star star;
    star = "abcdef";

    cout << strlen(ch) << endl;
    cout << sizeof(ch) << endl;

    Car* car = new Benz(50);
    car->show();

    return 0;
}

void testc121() {
    Cat cat(51,52,53,"Cat");
    using namespace std;
    cout << cat << endl;

    Animal *animal = &cat;

    Animal& ref = cat;

    ref.show();
    cat.show();
}
