#include <iostream>

using namespace std;

// 函数重载作用：函数名可以相同，提高复用性
/*
    函数重载的满足条件：
        · 同一个作用域
        · 函数名称相同
        · 函数参数类型不同 或者 个数不同 或者 顺序不同
    注意：
        函数的返回值不可以作为函数重载的条件
*/

void func()
{
    cout << "func 的调用" << endl;
}

void func(int a)
{
    cout << "func(int a) 的调用" << endl;
}

void func(double a)
{
    cout << "func(double a) 的调用" << endl;
}

void func(double a ,int b)
{
    cout << "func(double a,int b) 的调用" << endl;
}

void func(int b, double a)
{
    cout << "func(int b, double a) 的调用" << endl;
}


int main(int argc, char const *argv[])
{

    return 0;
}
