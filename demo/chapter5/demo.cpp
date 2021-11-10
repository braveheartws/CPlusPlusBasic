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

typedef struct Human {
    char name[50];
    int age;
} Human;

Human createHuman() {
    Human human{"braveheart", 55};
    cout << "create : " << &human << endl;
    return human;
}

int (*sum)(int, int);

int test88(int, int, int (*func)(int, int));

int sumimpl(int, int);

int swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}

int swapv(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout <<a <<"ss" << b << endl;
}

template<class T>
T calc(T& t, T& t1) {
    return t * t1;
}

//template <> int calc<int>(int&,int&);
template int calc<>(int&,int&);
int mainc5() {
    sum = &sumimpl;
    int ret = test88(8, 9, sum);
    cout << ret << endl;
    int a = 15;
    int &b = a;
    cout << &a << endl;
    cout << &b << endl;

    int src = 5;
    int dest = 8;
    //swap(&src, &dest);
    swapv(src,dest);
    cout <<src << endl;
    int bb = 5;
    int cc = 6;
    cout <<calc<int>(bb,cc) << endl;
    return 0;
}

int test88(int a, int b, int (*func)(int, int)) {
    return (*func)(a, b);
}

int sumimpl(int a, int b) {
    return a + b;
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