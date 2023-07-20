/* ************************************************************************
> File Name:     704.h
> Author:        程序员Carl
> 微信公众号:    代码随想录
> Created Time:  Thu 20 Jul 2023 05:23:20 PM CST
> Description:   
 ************************************************************************/
#ifndef __704_H
#define __704_H
#include <iostream>
#include <vector>
using namespace std;
void test();

void test_array();
void test()
{

    cout << "this is a test" << endl;

}
void test_array()
{
 int array[2][3] = {
		{0, 1, 2},
		{3, 4, 5}
       };
    cout << &array[0][0] << " " << &array[0][1] << " " << &array[0][2] << endl;
    cout << &array[1][0] << " " << &array[1][1] << " " << &array[1][2] << endl;
}

int search(vector<int>& nums, int target);


#endif
