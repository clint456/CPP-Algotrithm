/* ************************************************************************
> File Name:     class-template.cpp
> Author:        Quincy
> mail:          clintluo315@gmail.com
> Created Time:  Mon 24 Jul 2023 11:02:57 AM CST
> Description:   类模版的实现

 ************************************************************************/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
 
using namespace std;


//定义类模版Stack< >
template <class T>
class Stack{
    private:
        vector<T> elems; //容器变量

    public:
        void push(T const&);  // push(dataType const& a);

        void pop();

        T top() const; //return top of stack
        
        bool empty() const{
            return elems.empty(); //调用vector库函数实现
        }
};

//类模版的方法实现
//push
template <class T> 
void Stack<T>::push(T const& elem){
    elems.push_back(elem);
}

//pop
template <class T>
void Stack<T>::pop(){
    if (elems.empty()){
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    //删除最后一个元素
    elems.pop_back();
}

//top
template <class T>
T Stack<T>::top () const
{
    if (elems.empty()){
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    //返回最后一个元素的副本
    return elems.back();
}

int main(){
    try{
        Stack<int> intStack; // create int type stack
        Stack<string> stringStack; //create string type stack

        intStack.push(7);
        cout << intStack.top() <<endl;

        stringStack.push("阿哈");
        cout << stringStack.top() << endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception const& ex){
        cerr << "Exception:" << ex.what() << endl;
        return -1;
    }
}