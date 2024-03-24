#include <iostream>

using namespace std;

int func(int a, int b, int c)
{
    return a + b + c;
}

// 函数声明时有默认值，函数实现的时候就不能再有默认值了
/* 
    int func(int a = 10, int b = 20);
    int func(int a, int b){
    }
*/

// 如果某个位置有默认值，那么从这个位置往后，都必须得有默认值
int funcDefault(int a, int b = 30, int c = 40)
{
    return a+b+c;
}

int main(int argc, char const *argv[])
{
    int x = func(10, 20, 30);
    int y = funcDefault(10);
    cout << "x = " << x << " " << "y = " << y << endl;
    return 0;
}
