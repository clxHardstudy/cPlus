#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *p;
    int a[] = {10, 20, 30, 40, 50};
    p = a;
    cout << "a = " << a << endl;
    cout << "*a = " << *a << endl;
    cout << "*a + 1 = " << *(a + 1) << endl;
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;

    // 由于 m 是指向数组的指针，而 *m 解引用后得到的是数组的首元素的地址，因此 m 和 *m 打印出的地址相同。
    
    //     对于 int *n; n = a;：
    // n 是一个指针，它存储的是数组 a 的第一个元素的地址，也就是 &a[0]。
    // *n 解引用了指针 n，得到的是指针 n 所指向的值，也就是数组 a 的第一个元素的值，即 a[0]。
    // 因此，n 的值是 &a[0]，*n 的值是 a[0]。
    // 对于 int (*m)[5]; m = &a;：

    // m 是一个指向包含5个整数的数组的指针，它存储的是数组 a 的地址，也就是 &a 或 &a[0]。
    // *m 解引用了指针 m，得到的是指针 m 所指向的数组，也就是数组 a。
    // 因此，m 的值是 &a，*m 的值是 a。
    int *n;
    n = a;
    cout << "n = " << n << endl;
    cout << "*n = " << *n << endl;

    int(*m)[5];
    m = &a;
    cout << "m = " << m << endl;
    cout << "*m = " << *m << endl;
    return 0;
}
