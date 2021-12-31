//
// Created by admin on 2021/12/2.
//

#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "util.h"
#include <sys/time.h>
enum class NetUidPolicy {
    NET_POLICY_NONE = 0,
    NET_POLICY_ALLOW_METERED_BACKGROUND = 1 << 0,
    NET_POLICY_TEMPORARY_ALLOW_METERED = 1 << 1,
    NET_POLICY_REJECT_METERED_BACKGROUND = 1 << 2,
    NET_POLICY_ALLOW_ALL = 1 << 5,
    NET_POLICY_REJECT_ALL = 1 << 6,
};
typedef  struct T{
    int a;
    int b;
    int c;
    void toString();
};

typedef enum {
    ABCD
} XX;
int maintest() {
    using namespace std;
    std::vector<string> vec = {"1","2","6","7"};
    int ret = std::count(vec.begin(), vec.end(), "2");
    cout << ret << endl;
    ret = std::count(vec.begin(), vec.end(), "0");
    cout << ret << endl;
    ret = std::count(vec.begin(), vec.end(), "7");
    cout << ret << endl;
    XX a;
    a = ABCD;
    printf("");
    NetUidPolicy arr[] = {NetUidPolicy::NET_POLICY_NONE,
                          NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND,
                          NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED,
                          NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND,
                          NetUidPolicy::NET_POLICY_ALLOW_ALL,
                          NetUidPolicy::NET_POLICY_REJECT_ALL};
    vector<int> xx = {1,2,3,4,5};
    xx.clear();
    cout << "|" << xx.size() << endl;
    for (const NetUidPolicy &item : arr) {
        printf("item %d\n",item);
        vector<int>::iterator st =  xx.begin();
        while (st != xx.end()) {
            printf("xx %d\n",*st);
            st++;
        }
    }
    system("ls -la");

    T t{};
    t.toString();
    string aaa = "zhang";
    string bbb = "zhang";
    bool flag = aaa == bbb;
    cout << flag  << "|" << endl;
    cout << time(nullptr) << endl;

    return 0;
}

void  T::toString() {

}