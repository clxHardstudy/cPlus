#include <iostream>

int add1(int &r)
{
    r += 1;
    int res = r;
    return res;
}

using namespace std;

// 指针数组：指针数组是一个数组，其中的每个元素都是一个指针
// 数组指针：数组指针是指一个指向数组的指针

// 常量指针：const int *p    *p不能发生改变，即 p的指向可以改变，*p的值不能重新赋值
// 指针常量：int * const p   指针p的值不能改变，即p指向的地址不能改变，*p可以重新赋值
// 修饰常量、修饰指针 const int * const p 指针指向以及指针指向的地址上的值都不可以更改

int main(int argc, const char *argv[])
{
    // insert code here...
    int x, y, *z;
    x = 1;
    y = x;
    // 指针z指向 x的地址：z的值其实就是x的地址，使用*可以对地址上的值进行取值
    z = &x;
    cout << &x << " " << &y << " " << &z << endl;
    x = 2;
    cout << x << " " << y << " " << *z << endl;

    int array[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int *p1, *p2;
    p1 = array;
    p2 = &array[4];
    cout << "*p1 = " << *p1 << " "
         << "*p2 = " << *p2 << endl;
    cout << "*(p1+1) = " << *(p1 + 1) << " "
         << "*(p2+1) = " << *(p2 + 1) << endl;

    int *ip;
    ip = new int[10];
    for (int i = 0; i < 10; i++)
    {
        ip[i] = i;
        cout << ip[i] << " ";
    }
    cout << endl;

    int *p;
    p = array;
    for (int i = 0; i < 8; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    // 数组指针
    // 在使用数组指针时，我们需要指针指向的是整个数组，而不是数组的第一个元素。因此，我们需要使用&来获取数组的地址。&ary得到的是数组ary的地址
    int(*m)[6];
    int ary[] = {0, 1, 2, 3, 4, 5};
    m = &ary;
    cout << (*m)[0] << " " << (*m)[1];
    cout << endl;
    cout << &ary << " " << &ary[0] << " " << ary << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    int(*ptr)[5]; // ptr 是一个指向包含 5 个整数的数组的指针
    ptr = &arr;   // 将 ptr 指向数组 arr
    // 通过指针访问数组的元素 *ptr表示取得数组的首地址
    for (int i = 0; i < 5; ++i)
    {
        cout << "Element " << i << ": " << *(*ptr+i) << endl; // *(*ptr+i) 或者 (*ptr)[i]
    }

    int a = 12;
    int b = add1(a);
    int c = add1(a);
    cout << a << " " << b << " " << c << endl;

    int age = 20;
    cout << "age = " << age << endl;
    const int *const const_age = &age;
    cout << *const_age << endl;

    return 0;
}
