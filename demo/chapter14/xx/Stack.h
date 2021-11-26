//
// Created by admin on 2021/11/26.
//

#ifndef CPLUSPLUSBASIC_STACK_H
#define CPLUSPLUSBASIC_STACK_H

#include <ostream>

template<class Type>
class Stack {
private:
    enum {
        MAX = 10
    };
    Type items[MAX];
    int top;
public:
    Stack();

    bool isEmpty();

    bool isFull();

    bool push(const Type &item);

    bool pop(Type &item);

    friend std::ostream &operator<<(std::ostream &os, const Stack<Type>& obj);

    ~Stack();
};


#endif //CPLUSPLUSBASIC_STACK_H
