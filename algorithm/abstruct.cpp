/* ************************************************************************
> File Name:     abstruct.cpp(抽象类)
> Author:        程序员Carl
> 微信公众号:    代码随想录
> Created Time:  Thu 20 Jul 2023 07:49:36 PM CST
> Description:   
 ************************************************************************/
/**
 * 抽象类： 即基类   
 * 该类不能用于实例化（会报错）
 * 只能用作为接口使用
 * 
 * 继承该基类的子类：
 * 必须  1.先重载每个虚函数  2.再实例化虚函数  
 *
 *
 * 具体类：可以实例化对象的类
 ************************************************************************/

#include <iostream>
using namespace std;

//基类
class Shape
{

   public:
       //提供接口
       virtual int getArea() = 0;  //一定要=0
       void setWidth(int w)
       {
            width = w;
       }
       void setHeight(int h)
       {
            height = h;
       }

   protected:
       int width;
       int height;
};

//派生类（实现了虚函数的就是具体类，可以实例化）

class Rectangle: public Shape{
public:
    int getArea(){
        return (width*height);
    }
};

class Triangle: public Shape{
public:
    int getArea()
    {
        return (width*height)/2;
    }
};

int main(void)
{
    Rectangle Rect;//实例化具体类
    Triangle Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);

    cout <<"Total Rectangle area:" << Rect.getArea() <<endl;
   
    Tri.setWidth(5);
    Tri.setHeight(7);
    cout <<"Total Triangle area:" << Tri.getArea() <<endl;
    return 0;
    
}

