# C++ Primer Plus 学习笔记

## 第一章预备知识

![](./1.png)

## 第四章 复合类型

### 4.1 C风格字符串

```c
char dog[8] = {'a','b','c','d','e','f'};	//字符数组
char cat[8] = {'a','b','c','d','e','\0'};	//c风格字符串
char pig[8] = "winter";						//c风格字符串,默认加\0
char red[] = "red";							//c风格字符串
```

* **用引号括起的字符串隐式地包括结尾空字符, 不用显式地包括它**
* **确定存储字符串所需的最短数组时,需要将空字符计算在内**

### 4.4 结构体

**第一种方式**

```c
struct {
    char name[20];
    int age;
}user;
user.age = 10;	//全局只能使用一个user变量
```

**第二种方式**

```c
 struct person{
     int age;
 }mp1,mp2;
mp1.age = 8;
struct person p{18};

//允许初始化多个变量mp1...
```

**方式三**

```c
typedef struct {
    int age;
}student;

student  s;
s.age = 8;
student b;
b.age = 9;

typedef struct dog {
    int age;
}dog;

//初始化
struct Student s = {8};
struct Student s1{9};
student s3 = {8};
student s4{9};

//这两种方式的区别是, dog既可以用 struct dog d; 声明结构体也可以 dog d;声明
//而student只能是 student s;声明
```

### 4.7 指针

***运算符两边的空格是可选的,**

**传统上,C程序员使用这种格式:**

```c
int *ptr;	//强调*ptr是一个int类型的值
```

**C++程序员使用这种格式:**

```c
int* ptr;	//强调int*是一种类型  指向int的指针
```

**一定要在对指针应用解除引用运算符(*)之前,将指针初始化为一个确定的,适当的地址**

#### 4.7.4 使用new来分配内存

```c
int *pn = new int;	//pn指向一个数据对象
delete pn;

int* arr = new int[5];
arr += 1;
delete[] arr;	//需要将arr-=1,才能释放
```

## 第六章 分支语句

```c
#include <ctype.h>
#include <cctype>
```

![](./4.png)

## 第七章 函数

函数基本知识:

* 提供函数定义(实现)
* 提供函数原型(声明)
* 调用函数

![](./5.png)

```c
int sum_arr(const int *arr, int size);
int cookies[5] = {1,2,3,4,5};
int sum_arr(const int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total;
}
```

* **对数组名使用sizeof得到的是整个数组地址**

* **数组名是第一个元素地址**

* **将地址运算符&用于数组名时,将返回整个数组的地址, 将返回一个内存块的地址**

**重要恒等式: **

```c
arr[i] = *(arr + i);
&arr[i] = arr + i;
```

### 7.4 函数和二维数组

```c
int data[2][2] = {{1,2},{3,4}};
int total = sum(data, 2);
// 二维数组计算和对应的函数原型
int sum(int (*ptr)[2], 2);
```

### 7.5 函数和C-风格字符串

将字符串作为参数传递给函数, 则表示字符串的方式有三种

* char数组;
* 用引号引起的字符串常量
* 被设置为字符串地址的char指针

*C-风格字符串与常规char数组之间最重要的区别是,字符串有内置的结束字符'\0'

**返回C-风格字符串函数**

```c
char *buildstr(char c, int n){
    char *pstr = new char[n + 1];
    pstr[n] = '\0';
    while (n-- > 0)
        pstr[n] = c;
    return pstr;
}

char *ps = buildstr(ch, counts);
delete[] ps;
```

```c
Human createHuman() {
    Human human{"braveheart", 55};
    cout << "create : " << &human << endl;
    return human;
}
Human human = createHuman();
cout << "test: " << &human;
create : 0x63fd90
test: 0x63fd90

```

### 7.10 函数指针

```c
double pam(int);
double (*pd)(int);
```

相同的函数原型表示

```c
const double *f1(const double ar[], int n);
const double *f1(const double[], int n);	//可以省略标识符
const double *f1(const double*, int n);	//double ar[] = double*
```

简单函数指针示例:

```c
int (*sum)(int,int);
int test88(int,int,int (*func)(int,int));
int sumimpl(int,int);	//sum定义
int main() {
   sum = &sumimpl;
   int ret  = test88(8,9, sum);
   cout << ret << endl;
   return 0;
}

int test88(int a,int b,int (*func)(int,int)) {
    return (*func)(a,b);
}
//sum实现
int sumimpl(int a,int b) {
    return a +b;
}

```

#### 7.10.4 使用typedef简化函数指针

```c
typedef const double* (*p_fun)(const double*,int);
p_fun p1 = f1;

p_fun pa[2] = {f1,f2};
p_fun (*pd)[2] = &pa;
```

