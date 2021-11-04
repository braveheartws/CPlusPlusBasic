#include <iostream>

using namespace std;

// 1.普通宏定义
#define PI 3.14

// 2.简单计算宏定义
#define MAX(a, b) (a) > (b) ? (a) : (b)

// 3.宏延续运算 \
#define HELLO "hello \
world"

// 4.解除宏定义
#undef PI

// 5.下面这两种定义有区别
// INT1 a,b  相当于定义了 int *a, int b;
// 而typedef不会有这个问题
#define INT1 int *
typedef int *INT2;

// 6.有参数宏
#define COUNT(M) M * M          //可能异常例如test1例子
#define COUNT1(M) ((M) * (M))   //正确方式

void test1();

// 7.#运算符  将语言符号转换为字符串
#define SUM(a, b) printf(#a " + " #b " = %d\n", ((a) + (b)))

// 8.##运算符 粘贴运算符
#define NAME(n) brave##n

// 9.可变宏(...) 和 __VA_ARGS__
#define LOG(format, ...) printf(format"\n", __VA_ARGS__)

int main11() {
    int max = MAX(6, 7);
    cout << max << endl;

    test1();
    SUM(1 + 2, 3 + 4);  //1 + 2 + 3 + 4 = 10

    string bravewinters = "love ws";
    printf("bravewinters = %s\n", NAME(winters.c_str())); // NAME(winters) -> bravewinters

    LOG("my name is %s age: %d","BraveHeart",120);
    return 0;
}

void test0() {
    // 有参数宏
    int x = 6;
    // 输出结果： COUNT = 13    替换后相当于 6 + 1 * 6 + 1 = 13
    printf("COUNT = %d\n", COUNT(x + 1));

    // 输出结果： COUNT = 56    替换后相当于 ++6 * ++6 应该是 7 * 8 = 56
    // 但是程序输出结果是64 唯一解释是先进行两边的++操作最后 8 * 8
    printf("COUNT = %d\n", COUNT(++x));

    //解决方式是定义宏的时候在参数位置加括号  #define COUNT(M) ((M) * (M))
}
