//
// Created by admin on 2021/11/26.
//

#include "Stack.h"

template<typename Type>
bool Stack<Type>::isEmpty() {
    return top == 0;
}

template<typename Type>
bool Stack<Type>::isFull() {
    return top == MAX;
}

template<typename Type>
bool Stack<Type>::push(const Type &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else
        return false;
}

template<typename Type>
bool Stack<Type>::pop( Type &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else
        return false;
}

template<typename Type>
Stack<Type>::Stack() {
    top = 0;
}

template<typename Type>
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
template<typename Type>
Stack<Type>::~Stack() = default;