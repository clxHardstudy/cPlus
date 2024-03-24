#include <iostream>

using namespace std;
/*
    优点一：将成员属性设置为私有，可以自己控制读写权限
    优点二：对于写权限，我们可以自己控制数据的有效性
*/

class Person
{

public:
    void setName(string name)
    {
        p_Name = name;
    }

    string getName()
    {
        return p_Name;
    }

    int getAge()
    {
        return p_Age;
    }

    void setIdol(string idol)
    {
        p_Idol = idol;
    }

private:
    string p_Name; // 可读可写
    int p_Age;     // 只读
    string p_Idol; // 只写
};

int main()
{
    // Your code here
    Person p1;
    p1.setName("clx");
    cout << "姓名：" << p1.getName() << endl;
    cout << "年龄：" << p1.getAge() << endl;
    p1.setIdol("clx1");
    
    return 0;
}