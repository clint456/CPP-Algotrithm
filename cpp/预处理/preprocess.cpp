/* ************************************************************************
> File Name:     preprocess.cpp
> Author:        Quincy
> mail:          clintluo315@gmail.com
> Created Time:  Mon 24 Jul 2023 11:09:14 PM CST
> Description:   
> 参数宏:  
```cpp
...
#define MIN(a,b) (a<b ? a : b)
...

> 条件编译:
//这里相当于一个调试开关
//#define DEBUG
#ifdef DEBUG
    cerr << "Variable x = " << x <<endl;
#endif

 ************************************************************************/
//
#include <iostream>
using namespace std;
#define DEBUG

#define MIN(a,b) ((a < b) ? a : b)

int main()
{
    int i,j;
    i = 100;
    j = 30;
#ifdef DEBUG
    cerr << "Trace: Inside main function" << endl; 
#endif

#if 1
    //这里是注释部分
    cout << MKSTR(HELLO C++) << endl;
#endif
   
    cout << "The minimun is" << MIN(i,j) << endl;


#ifdef DEBUG
    cerr << "Trace: Coming out of main function" << endl;
#endif
    return 0 ;
}
