//
// Created by admin on 2021/11/17.
//

#include "Cat.h"

int main() {
    using namespace std;

    Cat cat(51,52,53,"Cat");
    cout << cat << endl;

    Animal *animal = &cat;

    Animal& ref = cat;

    ref.show();
    cat.show();
    return 0;
}
