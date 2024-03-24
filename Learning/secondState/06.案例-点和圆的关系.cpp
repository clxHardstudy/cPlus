#include <iostream>
#include "circle.h"
#include "point.h"

using namespace std;

// class Point
// {
// public:
//     void setX(int x)
//     {
//         m_X = x;
//     }

//     int getX()
//     {
//         return m_X;
//     }

//     void setY(int y)
//     {
//         m_Y = y;
//     }

//     int getY()
//     {
//         return m_Y;
//     }

// private:
//     int m_X;
//     int m_Y;
// };

// class Circle
// {
// public:
//     void setR(int r)
//     {
//         m_R = r;
//     }

//     int getR()
//     {
//         return m_R;
//     }

//     void setCenter(Point &center)
//     {
//         m_Center = center;
//     }

//     Point getCenter()
//     {
//         return m_Center;
//     }

// private:
//     int m_R;
//     Point m_Center;
// };

void isCricle(Circle &c1, Point &p1)
{
    int distance = (p1.getX() - c1.getCenter().getX()) * (p1.getX() - c1.getCenter().getX()) + (p1.getY() - c1.getCenter().getY()) * (p1.getY() - c1.getCenter().getY());
    int rSquare = c1.getR() * c1.getR();
    if (distance == rSquare)
    {
        cout << "点在圆上" << endl;
    }
    else if (distance > rSquare)
    {
        cout << "点在圆外" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}

int main()
{
    // Your code here
    Point p1;
    p1.setX(10);
    p1.setY(10);
    cout << "圆心的x坐标：" << p1.getX() << " "
         << "圆心的y坐标：" << p1.getY() << endl;
    Circle c1;
    c1.setCenter(p1);
    c1.setR(10);

    Point p2;
    p2.setX(0);
    p2.setY(10);
    isCricle(c1, p2);

    return 0;
}