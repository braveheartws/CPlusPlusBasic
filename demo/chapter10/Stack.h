//
// Created by admin on 2021/11/11.
//

#ifndef CPLUSPLUSBASIC_STACK_H
#define CPLUSPLUSBASIC_STACK_H

typedef unsigned long Item;
class Stack {
private:
    enum {MAX = 10};
    Item item[MAX];
public:
    Stack();
    bool isfull() const;
    bool isempty() const;
    bool push(const Item &item);
    bool pop(Item &item);
};


#endif //CPLUSPLUSBASIC_STACK_H
