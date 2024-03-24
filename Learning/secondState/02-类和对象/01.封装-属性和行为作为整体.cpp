#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
public:
    int r;
    double calculateZC()
    {
        return 2 * PI * r;
    }
};

int main(int argc, char const *argv[])
{
    Circle c1;
    c1.r = 5;
    cout << "圆的周长是：" << c1.calculateZC() << endl;
    return 0;
}
