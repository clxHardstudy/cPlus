#include <iostream>

using namespace std;

// 函数被调用之后，这里的变量a就会被释放【栈区】
int &funcQuote()
{
    int a = 10;
    return a;
}


// 函数调用可以作为左值
int &funcStatic()
{
    // 静态变量，存放在全局区。全局区的数据在程序执行结束之后由系统释放【非堆区开辟，而是静态存储区】
    static int a = 10;
    return a;
}

int main(int argc, char const *argv[])
{
    int &ref = funcQuote();
    cout << "ref = " << ref << endl;
    cout << "ref = " << ref << endl;

    int &tmp = funcStatic();
    cout << "tmp = " << tmp << endl;
    cout << "tmp = " << tmp << endl;

    // 函数的返回是 变量的引用，tmp和这个引用完全相同，因此给引用赋值之后tmp也随之改变
    funcStatic() = 1000;
    cout << "tmp = " << tmp << endl;
    return 0;
}
