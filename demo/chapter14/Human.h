//
// Created by admin on 2021/11/24.
//

#ifndef CPLUSPLUSBASIC_HUMAN_H
#define CPLUSPLUSBASIC_HUMAN_H


class Human {
private:
    int privateVar;
    void PrivateShow();
protected:
    int protectedVar;
    void ProtectedShow();
public:
    int pubVar;
    Human(int age);
    void PublicShow();
};


#endif //CPLUSPLUSBASIC_HUMAN_H
