#include<iostream>

using namespace std;


// C++的函数形参列表里面可以有占位参数，用来占位，调用函数时，必须填补该位置
void func(int a,int){
    cout << "hello ,world!" << endl;
}

int main(int argc, char const *argv[])
{
    func(10,20);
    return 0;
}
