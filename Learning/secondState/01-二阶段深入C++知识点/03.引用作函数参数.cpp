#include <iostream>

using namespace std;

// 值传递
void swapValue(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

// 地址传递
void swapAddr(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// 引用传递:实际上这里的形参是原本实参的一个别名，所以实际上是同一个数据
void swapQuote(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    swapValue(a, b);
    cout << "a = " << a << " "
         << "b = " << b << endl;

    swapAddr(&a, &b);
    cout << "a = " << a << " "
         << "b = " << b << endl;

    swapQuote(a, b);
    cout << "a = " << a << " "
         << "b = " << b << endl;
    return 0;
}
