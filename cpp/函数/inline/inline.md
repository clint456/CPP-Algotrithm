# inline 关键字
> - define:      为了解决频繁调用小函数造成栈空间消耗
> - restriction: 只适合函数体代码简单,不能包含如while\switch
> - just a command: inline只是一个建议关键字,是否真正内敛还得看编译器是否认为函数体简单
> - tips: 每一次调用内敛函数都需要在文件头部声明,建议inline直接在头文件中声明
> - warning: 如果内敛函数不能提高程序效率，那么就要避免使用它

## [coding demo](./inline.cpp)
