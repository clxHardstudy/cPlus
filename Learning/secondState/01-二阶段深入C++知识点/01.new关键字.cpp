#include <iostream>

using namespace std;

// 堆区数据都是由开辟者释放，可以使用delete关键字进行释放。
int *func_intger()
{
    // 在堆区创建整型数据
    // int * 类型
    int *p = new int(10);
    return p;
}

void func_array()
{
    // 创建整型数组
    int *array = new int[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    delete[] array;
}

int main(int argc, char const *argv[])
{
    int *p = func_intger();
    cout << *p << endl;
    cout << *p << endl;
    // 释放堆区数据
    delete p;
    cout << *p << endl;

    func_array();
    return 0;
}
