//
// Created by admin on 2021/11/26.
//

using namespace std;
#include <iostream>
#include "Stack.h"

int main() {
    Stack<string> stack;

    stack.push("A");
    stack.push("B");
    stack.push("C");
    cout << stack<< endl;
    string i;
    stack.pop(i);
    cout << stack<< endl;
    return 0;
}