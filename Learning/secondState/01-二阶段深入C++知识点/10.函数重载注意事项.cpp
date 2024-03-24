#include <iostream>

using namespace std;

// 函数重载注意事项
// 1、引用作为重载条件
void func(int &a)
{
    cout << "func(int &a) 调用" << endl;
}

void func(const int &a)
{
    cout << "func(const int &a) 调用" << endl;
}

// 2、函数重载碰到函数默认参数【如果调用func2(10)就会发生歧义，因为两个函数都可以调用，若是调用func2(10,20)就不会有问题】
void func2(int a, int b = 10){
    cout << "func2(int a, int b = 10) 调用" << endl;
}

void func2(int a){
    cout << "func2(int a) 调用" << endl;
}


int main(int argc, char const *argv[])
{

    return 0;
}
