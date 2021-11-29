//
// Created by admin on 2021/11/29.
//

#ifndef CPLUSPLUSDEMO_STACK_H
#define CPLUSPLUSDEMO_STACK_H

template<class T>
class Stack {
private:
    enum {
        SIZE = 10
    };
    int stacksize;
    T *items;
    int top;
public:
    explicit Stack(int ss = SIZE);

    Stack(const Stack &st);

    ~Stack() { delete[] items; };

    bool isempty() { return top == 0; }

    bool isfull() { return top == SIZE; };

    bool push(const T &item);

    bool pop(T &t);

    Stack &operator=(const Stack &st);

};

template<class T>
Stack<T>::Stack(int ss): stacksize(ss), top(0) {
    items = new T[stacksize];
}

template<class T>
Stack<T>::Stack(const Stack<T> &st) {
    stacksize = st.stacksize;
    top = st.top;
    items = new T[stacksize];
    for (int i = 0; i < top; ++i) {
        items[i] = st.items[i];
    }
}

template<class T>
bool Stack<T>::push(const T &item) {
    if (top < SIZE) {
        items[top++] = item;
        return true;
    } else
        return false;
}

template<class T>
bool Stack<T>::pop(T &t) {
    if (top > 0) {
        t = items[--top];
        return true;
    } else
        return false;
}

template<class T>
Stack<T> &Stack<T>::operator=(const Stack<T> &st) {
    if (this == st) {
        return *this;
    }
    delete[] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new T[stacksize];
    for (int i = 0; i < top; ++i) {
        items[i] = st.items[i];
    }
    return *this;
}

template<typename Type, int n>
class ArrayTP {
private:
    Type ar[n];
public:
    virtual Type &operator[](int);
    virtual Type operator[](int) const;

};

template<typename Type, int n>
Type &ArrayTP<Type, n>::operator[](int a) {
    return ar[a];
}

template<typename Type, int n>
Type ArrayTP<Type, n>::operator[](int b) const {
    return ar[b];
}
template<typename T>
class Array {
private:
    T entry;
public:
};

template<typename T>
class GrowArray : public Array<T> {

};

template<typename Tp>
class StackV1 {
private:
    Array<Tp> array;
};


template<class T1,class T2>
class Pair{
private:
    T1 t1;
    T2 t2;
};

template <> class StackV1<int> {

};

#endif //CPLUSPLUSDEMO_STACK_H
