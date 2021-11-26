//
// Created by admin on 2021/11/26.
//

#include "Stack.h"

template<class Type>
bool Stack<Type>::isEmpty() {
    return top == 0;
}

template<class Type>
bool Stack<Type>::isFull() {
    return top == MAX;
}

template<class Type>
bool Stack<Type>::push(const Type &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else
        return false;
}

template<class Type>
bool Stack<Type>::pop( Type &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else
        return false;
}

template<class Type>
Stack<Type>::Stack() {
    top = 0;
}

template<class Type>
std::ostream & operator<<(std::ostream &os, const Stack<Type> & obj) {
    if (obj.isEmpty()) {
        return os;
    }
    os << "start :\n";
    int index ;
    for(index = 0; index < obj.top ; index++) {
        os << "[ " << obj.items[index] << " ]";
    }
    os << "end :\n";

    return os;
}
template<class Type>
Stack<Type>::~Stack() = default;