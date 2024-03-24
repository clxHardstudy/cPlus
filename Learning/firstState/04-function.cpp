#include <iostream>
using namespace std;


// 函数参数的传递：引用传递或指针传递才可以改变传递的参数值，关于add_value函数传递进来的参数是副本而不是其本身，
// 所以改变的只是函数内部的副本，而不会影响到调用函数时传递的原始值。

// 形参：一个整数值
int add_value(int value){
    value++;
    return value;
}
// 形参：一个指向整数值的指针
int add_indicator(int *point){
    (*point)++;
    return (*point);
}
// 形参：整数的引用
int add_address(int &point){
    point++;
    return point;
}


// 递归求和
int sum(int n){
    if ( n == 1 ){
        return 1;
    }
    return n + sum(n-1);
}


// 函数重载：
// 同一个函数名对应不同的函数实现，每一类实现对应着一个函数体，名字相同，功能相同，只是参数的类型或参数的个数不同。
// 多个同名函数只是函数类型（函数返回值类型）不同时，它们不是重载函数
int add(int a,int b)
{
    return a+b;
}
double add(double a,double b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int value = 0;
    cout << "add_value(value) = " << add_value(value) << endl;
    cout << "value = " << value << endl;
    cout << "add_indicator(&value) = " << add_indicator(&value) << endl;
    cout << "add_address(value) = " << add_address(value) << endl;
    
    cout << sum(10) << endl;
    
    cout << add(1, 2) << endl;
    cout << add(1.1, 2.2) << endl;
    cout << add(1, 2, 3) << endl;

    return 0;
}
