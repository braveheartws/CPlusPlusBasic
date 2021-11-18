//
// Created by admin on 2021/11/17.
//

#include "Cat.h"
#include "BrassPlus.h"
#include "Father.h"
#include "Child.h"

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

    Child child;
    Father *father = &child;
    father->show();
    int a = 3;
    int b = a;
    b = 5;
    cout << a << endl;
    cout << b << endl;
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
