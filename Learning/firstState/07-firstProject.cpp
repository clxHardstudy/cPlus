#include <iostream>

#define MAX 1000

using namespace std;

struct contactPerson
{
    string Name;
    string Sex;
    int Age;
    string Phone;
    string Address;
};

struct addressBooks
{
    struct contactPerson personArray[MAX];
    int personNumber;
};

void clearScreen()
{
    system("read -p'Press any key to continue...'"); // 等待用户按下任意键
    system("clear");
}

// 判断联系人是否存在 存在：返回下标 不存在：返回-1
int isExist(struct addressBooks *addrBook, string name)
{
    for (int i = 0; i < addrBook->personNumber; i++)
    {
        if (addrBook->personArray[i].Name == name)
        {
            return i;
        }
    }
    return -1;
};

// 显示主菜单
void showMenu()
{
    cout << "***********************" << endl;
    cout << "*****1、添加联系人*****" << endl;
    cout << "*****2、显示联系人*****" << endl;
    cout << "*****3、删除联系人*****" << endl;
    cout << "*****4、查找联系人*****" << endl;
    cout << "*****5、修改联系人*****" << endl;
    cout << "*****6、清空联系人*****" << endl;
    cout << "*****0、退出系统  *****" << endl;
    cout << "***********************" << endl;
}

// 显示修改菜单
void showModifyMenu()
{
    cout << "*********************" << endl;
    cout << "*****1、修改姓名*****" << endl;
    cout << "*****2、修改性别*****" << endl;
    cout << "*****3、修改年龄*****" << endl;
    cout << "*****4、修改号码*****" << endl;
    cout << "*****5、修改地址*****" << endl;
    cout << "*****0、退出修改*****" << endl;
    cout << "*********************" << endl;
}

// 添加联系人
void addContactPerson(struct addressBooks *addrBook)
{
    if (addrBook->personNumber >= 1000)
    {
        cout << "通讯录联系人已达到上限（1000人）";
        return;
    }
    else
    {
        string name;
        string sex;
        int age;
        string phone;
        string address;
        cout << "请输入联系人姓名：" << endl;
        cin >> name;
        cout << "请输入联系人性别：" << endl;
        cin >> sex;
        cout << "请输入联系人年龄：" << endl;
        cin >> age;
        cout << "请输入联系人手机号：" << endl;
        cin >> phone;
        cout << "请输入联系人地址：" << endl;
        cin >> address;
        addrBook->personArray[addrBook->personNumber].Name = name;
        addrBook->personArray[addrBook->personNumber].Sex = sex;
        addrBook->personArray[addrBook->personNumber].Age = age;
        addrBook->personArray[addrBook->personNumber].Phone = phone;
        addrBook->personArray[addrBook->personNumber].Address = address;

        addrBook->personNumber++;
        cout << "第" << addrBook->personNumber << "号联系人添加成功" << endl;
        clearScreen();
    }
}

// 显示联系人
void showContactPerson(struct addressBooks *addrBook)
{
    system("clear");
    cout << "姓名\t"
         << "性别\t"
         << "年龄\t"
         << "手机号\t\t"
         << "地址\t" << endl;
    if (addrBook->personNumber == 0)
    {
        cout << "通讯录为空！！！" << endl;
    }
    else
    {
        for (int i = 0; i < addrBook->personNumber; i++)
        {
            cout << addrBook->personArray[i].Name << "\t" << addrBook->personArray[i].Sex << "\t" << addrBook->personArray[i].Age << "\t"
                 << addrBook->personArray[i].Phone << "\t" << addrBook->personArray[i].Address << "\t" << endl;
        }
    }
    clearScreen();
};

// 删除联系人
void deleteContactPerson(struct addressBooks *addrBook)
{
    string name;
    cout << "请输入想要删除的联系人姓名：" << endl;
    cin >> name;
    int ret = isExist(addrBook, name);
    if (ret == -1)
    {
        cout << "该联系人不存在" << endl;
    }
    else
    {
        cout << "找到此人，可以删除！" << endl;
        for (int i = ret; i < addrBook->personNumber; i++)
        {
            addrBook->personArray[i] = addrBook->personArray[i + 1];
        }
        addrBook->personNumber--;
        cout << "删除成功！！！" << endl;
        clearScreen();
    }
}

// 查找联系人
void findContactPerson(struct addressBooks *addrBook)
{
    string name;
    cout << "请输入想要查找的联系人姓名：" << endl;
    cin >> name;
    clearScreen();
    int ret = isExist(addrBook, name);

    cout << "姓名\t"
         << "性别\t"
         << "年龄\t"
         << "手机号\t\t"
         << "地址\t" << endl;

    if (ret == -1)
    {
        cout << "联系人" << name << "不存在！" << endl;
    }
    else
    {
        cout << addrBook->personArray[ret].Name << "\t" << addrBook->personArray[ret].Sex << "\t" << addrBook->personArray[ret].Age << "\t"
             << addrBook->personArray[ret].Phone << "\t" << addrBook->personArray[ret].Address << "\t" << endl;
    }
    clearScreen();
}

// 修改联系人
void modifyContactPerson(struct addressBooks *addrBook)
{
    string name;
    cout << "请输入想要修改的联系人姓名：" << endl;
    cin >> name;
    clearScreen();
    int ret = isExist(addrBook, name);

    int select;
    string m_name;
    string m_sex;
    int m_age;
    string m_phone;
    string m_address;
    cout << "姓名\t"
         << "性别\t"
         << "年龄\t"
         << "手机号\t\t"
         << "地址\t" << endl;
    if (ret == -1)
    {
        cout << "联系人" << name << "不存在！" << endl;
    }
    else
    {
        while (true)
        {
            cout << addrBook->personArray[ret].Name << "\t" << addrBook->personArray[ret].Sex << "\t" << addrBook->personArray[ret].Age << "\t"
                 << addrBook->personArray[ret].Phone << "\t" << addrBook->personArray[ret].Address << "\t" << endl;
            showModifyMenu();
            cin >> select;
            switch (select)
            {
            case 1:
                cout << "请输入修改后的姓名：" << endl;
                cin >> m_name;
                addrBook->personArray[ret].Name = m_name;
                clearScreen();
                break;

            case 2:
                cout << "请输入修改后的性别：" << endl;
                cin >> m_sex;
                addrBook->personArray[ret].Sex = m_sex;
                clearScreen();
                break;

            case 3:
                cout << "请输入修改后的年龄：" << endl;
                cin >> m_age;
                addrBook->personArray[ret].Age = m_age;
                clearScreen();
                break;

            case 4:
                cout << "请输入修改后的手机号：" << endl;
                cin >> m_phone;
                addrBook->personArray[ret].Phone = m_phone;
                clearScreen();
                break;

            case 5:
                cout << "请输入修改后的地址：" << endl;
                cin >> m_address;
                addrBook->personArray[ret].Address = m_address;
                clearScreen();
                break;

            case 0:
                clearScreen();
                return;
                break;

            default:
                cout << "无效的选择，请重新输入" << endl;
                clearScreen();
                break;
            }
        }
    }
    clearScreen();
}

// 清空通讯录【逻辑清空】
void clearAllPerson(struct addressBooks *addrBook)
{
    cout << "确定要清空所有的联系人记录吗？【yes/no】" << endl;
    string select;
    cin >> select;
    if (select == "yes")
    {
        addrBook->personNumber = 0;
        cout << "清空通讯录联系人成功！" << endl;
    }
    else
    {
        cout << "清空通讯录联系人失败！" << endl;
    }
    clearScreen();
}

int main(int argc, const char *argv[])
{
    // insert code here...
    // 初始化通讯录
    struct addressBooks addrBook;
    addrBook.personNumber = 0;

    int select;
    // string name;
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        // 添加联系人
        case 1:
            addContactPerson(&addrBook);
            break;
        // 显示联系人
        case 2:
            showContactPerson(&addrBook);
            break;
        // 删除联系人
        case 3:
            deleteContactPerson(&addrBook);
            break;
        // 查找联系人
        case 4:
            findContactPerson(&addrBook);
            break;
        case 5:
            // 修改联系人
            modifyContactPerson(&addrBook);
            break;
        case 6:
            clearAllPerson(&addrBook);
            break;
        case 0:
            return 0;
            break;
        default:
            cout << "无效的选择，请重新输入" << endl;
            clearScreen();
            break;
        }
    }

    return 0;
}
