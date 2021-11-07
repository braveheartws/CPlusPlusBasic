#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <fstream>

using namespace std;

void test51();

void testcin();

void testio();

void testfunc();

double cube(double x);

int sum_arr(const int *arr, int size);

typedef struct Human{
    char name[50];
    int age;
}Human;

Human createHuman() {
    Human human{"braveheart", 55};
    cout << "create : " << &human << endl;
    return human;
}

int (*sum)(int,int);
int test88(int,int,int (*func)(int,int));

int sumimpl(int,int);

int main() {
    sum = &sumimpl;
    int ret  = test88(8,9, sum);
    cout << ret << endl;
    return 0;
}

int test88(int a,int b,int (*func)(int,int)) {
    return (*func)(a,b);
}

int sumimpl(int a,int b) {
    return a +b;
}

int sum_arr(const int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total;
}

void testfunc() {
    int cookies[5] = {1, 2, 3, 4, 5};
    int sum = sum_arr(cookies, 5);
    cout << sum << endl;

    Human human = createHuman();
    cout << "test: " << &human;
}


double cube(double x) {
    x = 5;
    return x;
}

void testio() {
    ofstream outFile;
    ofstream fout;
    outFile.open("bbb.txt");
    outFile << "sdfffffds";
    outFile.close();
}

void testcin() {
    char ch[50];
    cin.getline(ch, 49);

    cout << ch << endl;
}

void test51() {
    int arr[2][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 0}};


    cout << arr << endl;
    cout << *arr << endl;
    cout << &(**arr) << endl;
}