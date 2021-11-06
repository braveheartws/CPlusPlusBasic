#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <fstream>

using namespace std;

void test51();
void testcin();
void testio();

int main() {
    testio();
    return 0;
}

void testio() {
    ofstream  outFile;
    ofstream  fout;
    outFile.open("bbb.txt");
    outFile<<"sdfffffds";
    outFile.close();
}

void testcin() {
    char ch[50];
    cin.getline(ch,49);

    cout << ch << endl;
}

void test51() {
    int arr[2][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 0}};


    cout << arr << endl;
    cout << *arr << endl;
    cout << &(**arr) << endl;
}