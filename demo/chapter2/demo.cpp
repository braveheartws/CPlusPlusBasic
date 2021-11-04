//
// Created by 39535 on 2021/11/2.
//
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>

using namespace std;
void test1();
void studyarray();
void cplusstring();
int *returnpointer();
void teststruct();
void testunion();
void testpointer();

int main() {
    testpointer();
    return 0;
}

void testpointer() {
    int* arr = new int[10];
    arr[0] = 1;
    arr[1] = 2;
    cout  << arr[0] << endl;
    arr+=1;
    cout  << arr[0] << endl;
    arr-=1;
    delete [] arr;

}


struct {
    char name[20];
    int age;
} user;

struct person {
    int age;
} mp1, mp2;

typedef struct Student {
    int age;
} student;

typedef struct {
    int age;
} student2;

union size{
    int i;
    double d;
    float f;
};

void testunion() {
    union size s;
    s.i = 8;
    cout << sizeof(union size) << endl;
    s.d = 8055.8;
    cout << sizeof(union size) << endl;
    s.f = 8.0;
    cout << sizeof(union size) << endl;
}

void teststruct() {
    //init
    struct Student s5 = {8};
    struct Student s1{9};
    student s3 = {8};
    student s4{9};

    user.age = 99;
    strcpy(user.name, "888");

    student s;
    s.age = 8;
    student b;
    b.age = 9;

    student2 g;

    struct Student ss;

    struct Student e{8};
    student f{9};

    cout << s.age << endl;
    cout << b.age << endl;
}

int *returnpointer() {
    static int a = 555; //不允许返回, 除非+static
    //int a = 555; //不允许返回, 除非+static
    cout << "returnpointer:" << &a << endl;
    return &a;
}


void cplusstring() {
    string str = "123";
    char str1[] = "123";
    cout << sizeof(str) << "  " << strlen(str.c_str()) << endl;
    cout << sizeof(str1) << "  " << strlen(str1) << endl;
}

void studyarray() {
    char dog[8] = {'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b'};    //字符数组
    char cat[8] = {'a', 'b', 'a', 'b', 'a', 'b', 'a', '\0'};   //c风格字符串
    char pig[10] = "youarepig";
    char dark[] = "xxxxx";
    cout << sizeof(dark) << endl;
    cout << dog << endl;
}

void test1() {
    std::cout << "Hello, World!" << std::endl;
    using namespace std;
    cin.get();
    signed char a = -1;
    char b = -1;
    int i = -1;
    stringstream ss;
    ss << i;
    string str;
    ss >> str;
    const char *h = str.c_str();
    cout << h << endl;
    printf("aa%c\n", h);
    char ct = u'C';
    printf("aa%s\n", h);
}