/* ************************************************************************
> File Name:     except_option.cpp
> Author:        Quincy
> mail:          clintluo315@gmail.com
> Created Time:  Thu 20 Jul 2023 11:49:45 PM CST
> Description:   
 ************************************************************************/

/*
 *
 * throw:
 * 当问题出现时，程序会抛出一个异常。这是通过使用 throw 关键字来完成的。
 *
 * catch:
 * 在您想要处理问题的地方，通过异常处理程序捕获异常。catch 关键字用于捕获异常。
 *
 * try:
 * try
 * 块中的代码标识将被激活的特定异常。它后面通常跟着一个或多个 catch 块。
 */

#include <iostream>
using namespace std;

double division(int a, int b)
{
   if( b == 0 )
   {
   //扔出一个异常
       throw "Division by zero condition!";
   }
   return (a/b);
}

int main ()
{
   int x = 50;
   int y = 0;
   double z = 0;

   try {
     z = division(x, y);
     cout << z << endl;
  //在这里捕获对应的异常 here is a const char type exception;
   }catch (const char* msg) {
     cerr << msg << endl;
   }

   return 0;
}


