#include <iostream>

using namespace std;

/*
    栈区（Stack）：
        栈区是一种自动分配内存的区域，由编译器自动管理。
        栈区存储的数据通常是局部变量和函数参数等。
        栈区的分配和释放是由编译器自动完成的，遵循后进先出（LIFO）的原则。
        栈区的大小是有限的，并且通常比堆区小得多，因此对于较小的数据和短期的数据存储是合适的。
*/
int *func_stack()
{
    int a = 10;
    int *p = &a;
    return p;
}

/*
    堆区（Heap）：
        堆区是一种动态分配内存的区域，由程序员手动管理。
        堆区存储的数据通常是通过new、malloc等动态内存分配方式分配的，并且需要手动释放。
        堆区的分配和释放不受编译器控制，由程序员负责，因此需要注意避免内存泄漏和野指针等问题。
        堆区的大小通常比栈区大得多，并且在程序运行期间可以动态调整大小，因此适合存储较大的数据和需要长时间保存的数据。
*/
int *func_heap()
{
    int *a = new int(10);
    return a;
}

int main(int argc, char const *argv[])
{
    int *p_stack;
    p_stack = func_stack();
    // 虽然在这里输出没有什么问题，但是实际上，当变量a一旦被释放掉，p_stack就会变成悬空指针，这是应该避免的。所以，可以在堆上给这个变量开辟空间。
    cout << "p_stack = " << *p_stack << endl;
    cout << "p_stack = " << *p_stack << endl;
    cout << "p_stack = " << *p_stack << endl;

    int *p_heap;
    p_heap = func_heap();
    cout << "p_heap = " << *p_heap << endl;
    cout << "p_heap = " << *p_heap << endl;
    cout << "p_heap = " << *p_heap << endl;
    return 0;
}
