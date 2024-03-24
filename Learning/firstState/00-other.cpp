#include <iostream>

#define TIME 10

using namespace std;

void func() {
    static int count = 0;
    count++;
    cout << "Function has been called " << count << " times." << endl;
}

void swap_int(int &a, int &b){
    int tmp = b;
    b = a;
    a = tmp;
}

void swap_pointer(int *a, int *b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int main(int argc, const char * argv[]) {
    int s1 = 1,s2 = 2;
    swap_int(s1, s2);
    cout << "s1 = " << s1 << " " << "s2 = " << s2 << endl;
    
    swap_pointer(&s1, &s2);
    cout << "s1 = " << s1 << " " << "s2 = " << s2 << endl;

    func();
    
    // extern 变量(函数)声明
    // 声明的变量或函数是另一个文件中存在的而不是在本文件中存在

    // 枚举
    enum color {red, blue=5, green} c;
    c = green;
    cout << c << endl;
        
    // 定义了一个变量a，在未赋值的情况下，会输出一个意外的结果
    // 指针b指向的是变量a的地址，因此b的输出是a的地址
    int a;
    int *b = &a;
    cout<< "a = " << &a << "b = " << b << endl;
    
    // 运算符
    int x = 4;
    int y = 5;
    int area;
    x *= y;
    area = x;
    cout <<"x = "<< x <<"area = "<< area << endl;
    
    int i;
    // 循环语句
    for (i = 0 ; i < TIME; i++) {
        cout << "i = " << i << " " ;
    }
    cout << endl;
    
    while (i > 0) {
        cout << "i = " << i << " " ;
        i--;
    }
    cout << endl;
    
    do {
        cout << "i = " << i << " " ;
        i++;
    } while (i < TIME);
    cout << endl;
    
    
}
