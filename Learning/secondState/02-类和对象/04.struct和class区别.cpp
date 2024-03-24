#include <iostream>

using namespace std;

// class和struct的区别之处：
// class默认里面的内容是privated struct默认内部定义的内容是public

class C1{
    int c1_age;
};

struct C2{
    int  c2_age;
};

int main() {
    // Your code here
    C1 p1;
    // 不可访问 
    // p1.c1_age = 10;
    C2 p2;
    p2.c2_age = 20;
    return 0;
}