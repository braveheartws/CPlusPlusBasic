//
// Created by admin on 2021/11/24.
//

#ifndef CPLUSPLUSBASIC_STUDENTNEW_H
#define CPLUSPLUSBASIC_STUDENTNEW_H
#include <string>
#include <valarray>
typedef std::valarray<double> ArrayDb;
class StudentNew :private std::string ,private std::valarray<double>{


public:
    using std::valarray<double>::max;
    using std::valarray<double>::sum;
    StudentNew(const char* str,const double *pd,int n):std::string (str), ArrayDb(pd,n){};
    double Average() const;
    ArrayDb GetArrayDb();
    friend std::ostream & operator<<(std::ostream& os, const StudentNew& stu);
};


#endif //CPLUSPLUSBASIC_STUDENTNEW_H
