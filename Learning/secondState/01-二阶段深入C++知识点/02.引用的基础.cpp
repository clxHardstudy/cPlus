#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // 注意这里b和c的不同
    // b和a仅仅只是值相同，c和a是完全相同，因为它们的地址是一样的
    // 注意点：1:引用必须初始化、2:初始化后不可以改变
    int a = 10;
    int b = a;
    int &c = a;
    a = 15;
    cout << "a = " << a << " "
         << "b = " << b << endl;

    cout << "a = " << a << " "
         << "c = " << c << endl;
    return 0;
}
