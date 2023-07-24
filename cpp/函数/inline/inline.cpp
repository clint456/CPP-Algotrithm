/* ************************************************************************
> File Name:     inline.cpp
> Author:        Quincy
> mail:          clintluo315@gmail.com
> Created Time:  Mon 24 Jul 2023 10:23:03 AM CST
> Description:   inline dmeo 
 ************************************************************************/
#include <iostream>
using namespace std;

class Point
{

public:
    unsigned& x();
    unsigned& y();
private:
    unsigned _x;
    unsigned _y;
};

inline unsigned& Point::x()
{
    return _x;

}
inline unsigned& Point::y()
{

    return _y;
}
}

int main()
{
//这里point 类的开销将会减少
}
