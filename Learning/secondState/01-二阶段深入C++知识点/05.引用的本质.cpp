#include <iostream>

using namespace std;

void func(int &a)
{
    a = 100;
}

int main(int argc, char const *argv[])
{
    int a = 10;

    // 这里实际上是 int* const ref = &a ref实际上是一个指针常量：指针的指向不能改变，指针所指向的值可以改变
    int &ref = a;
    ref = 20;

    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;
    return 0;
}
