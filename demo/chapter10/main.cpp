//
// Created by 39535 on 2021/11/10.
//

#include "Stock.h"
#include "Brave.h"
#include <cstdio>

using namespace std;
namespace zjp{
    int a = 8;
    namespace zhm{
        int db = 8;
    }
}

enum class Color{
    WHITE,COLOR,YELLOW,BLACK
};

enum Color2{
    WHITE,COLOR,YELLOW,BLACK
};
int mainc10() {
    double a = 10;
    double b = 20;
    double c = 30;
    double d = 40;
    Stock stock(a,b);
    Stock stock1 = Stock(c,d);
    stock1.print();

    stock1 = Stock();

    stock1.print();

    Stock *s5 = new Stock;

    Brave brave;
    Color color = Color::COLOR;


    printf("xxx: %d\n",color);
    return 0;
}

