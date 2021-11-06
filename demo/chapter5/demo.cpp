#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>

using namespace std;

void test51();

int main() {
    test51();
    return 0;
}

void test51() {
    int arr[2][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 0}};


    cout << arr << endl;
    cout << *arr << endl;
    cout << &(**arr) << endl;
}