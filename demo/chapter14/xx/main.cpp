//
// Created by admin on 2021/11/26.
//

using namespace std;
#include "HasFriendT.h"

int main() {
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
    return 0;
}