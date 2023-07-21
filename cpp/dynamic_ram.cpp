/* ************************************************************************
> File Name:     dynamic_ram.cpp
> Author:        Quincy
> mail:          clintluo315@gmail.com
> Created Time:  Fri 21 Jul 2023 11:27:46 AM CST
> Description:   
 ************************************************************************/

/* 检查是否new成功 */
#include <iostream>

using namespace std;

void check_new(double* pvalue)
{

if( !(pvalue  = new double ))
{
   cout << "Error: out of memory." <<endl;
}
}

int main()
{
    double* p = NULL;
    check_new(p);
    return 0;
}
