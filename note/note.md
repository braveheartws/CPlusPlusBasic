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

