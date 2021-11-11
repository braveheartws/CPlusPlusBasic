#include <iostream>
using namespace std;
namespace ZhangJunPu{
    int age = 28;
    namespace WinterSweett {
        int age = 18;
    }
    void fetch(){
    }
}

void fetch() {
}
int mainc99() {
    using namespace ZhangJunPu::WinterSweett;
    cout << ZhangJunPu::WinterSweett::age << endl;
    cout << ZhangJunPu::age << endl;
    fetch();
    return 0;
}