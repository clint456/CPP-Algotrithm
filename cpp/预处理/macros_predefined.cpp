/* ************************************************************************
> File Name:     _# & ##运算符 & 预定义宏.cpp
> Author:        Quincy
> mail:          clintluo315@gmail.com
> Created Time:  Mon 24 Jul 2023 11:38:40 PM CST
> Description:   

 ************************************************************************/
#include <iostream>

#define MORE_PRE_DEFINE

using namespace std;

int main(){


//#运算符demo ----------------------------
#ifdef USE_one
//这里#的作用是将令牌中的内容（MKSTR: 类似于函数名）转换为string
#define MKSTR( x ) #x
//int main(){
    cout << MKSTR(HELLO C++) << endl;
    return 0;
//}
#endif

//##运算符demo ----------------------------
#ifdef USE_two
//这里##的作用是用于连接两个令牌(参数) 目前感觉没啥用
    #define CONCAT(x, y) x##y

    int xy = 100;
    cout  << CONCAT(x,y) << endl;
    return 0 ;
#endif

//一些常用的预定义宏 -------------------------------
//__LINE__ : 当前行号
//__FILE__ : 当前文件名
//__DATE__ : 日期
//__TIME__ : 时间
#ifdef MORE_PRE_DEFINE
    cout << "Value of __LINE__ :" << __LINE__ << endl;
    cout << "Value of __FILE__ :" << __FILE__ << endl;
    cout << "Value of __DATE__ :" << __DATE__ << endl;
    cout << "Value of __TIME__ :" << __TIME__ << endl;

    return 0;
#endif
}