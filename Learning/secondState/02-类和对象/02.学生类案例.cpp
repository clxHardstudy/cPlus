#include <iostream>

using namespace std;

class Student
{
public:
    int s_id;
    string s_name;

public:
    void showStudent()
    {
        cout << "id = " << s_id << " "
             << "name = " << s_name << endl;
    }

    void setId(int id)
    {
        s_id = id;
    }

    void setName(string name)
    {
        s_name = name;
    }
};

int main()
{
    // Your code here
    Student stu1;
    stu1.s_id = 1;
    stu1.s_name = "张三";
    stu1.showStudent();

    Student stu2;
    stu2.setId(2);
    stu2.setName("李四");
    stu2.showStudent();
    return 0;
}