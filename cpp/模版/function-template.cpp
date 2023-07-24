/* ************************************************************************
> File Name:     function-template.cpp
> Author:        Quincy
> mail:          clintluo315@gmail.com
> Created Time:  Sun 23 Jul 2023 11:53:17 PM CST
> Description:   "函数模版 -- 通用函数"
> define:        使用泛型来定义函数
> 泛型:          简单来说,将类型作为参数传递给模版可以使编译器生成对应的类型函数.

> 函数模版的一般形式
> param1: ret-type -- 函数模版调用返回的参数类型  
> param2: type -- 调用模版函数时,所要传入的数据类型的参数
template <typename type> ret-type func-name(parameter list)
{

//函数主体
}
 ************************************************************************/
//函数模版实例
#include <iostream>
#include <string>

using namespace std;

template <typename T> inline T const& Max (T const&a, T const& b)
{
    return a<b ? b:a;

}

//inline: 见/函数/inline.md
int main()
{
    int i = 39;
    int j = 20;
    cout << "Max(i,j): " << Max(i,j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1,f2): " << Max(f1,f2) << endl;

    string s1 = "hhh";
    string s2 = "www";
    cout << "Max(s1,s2): " << Max(s1,s2) << endl;    

return 0;
}


