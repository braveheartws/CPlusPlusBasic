//
// Created by admin on 2021/11/26.
//

using namespace std;
#include "HasFriendT.h"
#include "Stack.h"

int mainxx14() {
    counts<int>();
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);
    report(hfi1);
    report(hfi2);
    report(hfdb);

    cout << " counts<int>() \n";
    counts<int>();
    cout << " counts<double>() \n";
    counts<double>();

    show2(hfi1,hfdb);

    class HasFriendT<int> sit(2);
    class HasFriendT<int> vv(2);
    return 0;
}