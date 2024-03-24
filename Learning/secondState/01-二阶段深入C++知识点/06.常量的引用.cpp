#include <iostream>

using namespace std;

// 常量引用可以防止误操作【只读】
void func(const int &val)
{
    // val = 1000; // 传入的参数是常量，是不可修改的
    cout << "val = " << val << endl;
}

int main(int argc, char const *argv[])
{
    // 这里实际上是 int tmp = 10; const int &ref = tmp;
    const int &ref = 10;
    func(ref);
    int b = 10;
    // 仅仅赋值
    int a = b;
    b = 20;
    cout << "a = " << a << " "
         << "b = " << b << endl;
    // 这里是引用
    int &c = b;
    cout << "c = " << c << " "
         << "b = " << b << endl;
    return 0;
}
