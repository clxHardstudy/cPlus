#include <iostream>

using namespace std;

/*
    访问权限：
        pulbic：    类外可以访问   派生类可以访问   类内可以访问
        protected:  类外不可以访问 派生类可以访问   类内可以访问
        private:    类外不可以访问 派生类不可以访问 类内可以访问
*/
class Person
{
public:
    string p_name;

protected:
    string p_car;

private:
    string p_pwd;

public:
    void setFunc()
    {
        p_name = "张三";
        p_car = "宝马";
        p_pwd = "123456";
    }
    void showInfo()
    {
        cout << "name = " << p_name << " "
             << "car = "
             << " " << p_car << " "
             << "pwd = " << p_pwd << endl;
    }
};

int main()
{
    // Your code here
    Person p1;
    p1.setFunc();
    p1.p_name = "李四";

    p1.showInfo();
    return 0;
}