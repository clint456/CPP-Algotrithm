# C 

## 转义字符：
> - '\a' ：vision | sound alert) 
> - '\b' : backspace
> - '\f' : change cursor to the top of next page
> - '\n' : change line
> - '\r' : carriage return
> - '\t' : vertical form
> - '\v' : horizontal form
> - '\101' octal of ACSII
> - '\x41' hex of ACSII  


## 常变量、符号常量：
```c
//符号常量
//#define是预编译指令，在预编译后所有的PI都会被替换成3.14
//对于PI来说，系统不会分配内存给它
#define PI 3.14

//常变量
//系统会给pi分配内存，他只是一个不能改变值的变量，使用更加方便
const float pi = 3.14
```

## 标识符:
> - 只能 *字母、数字、下划线* 组成
> - 开头只能 *字母、下划线*

## 字符型数据：

> ### ACSII字符集 
> - 7位二进制
> - 用一个字节存储（第一位 置为0）（共127个）
- 字母: （大小写 52个）
- 数字: （0～9  10个）
- 专门符号:   （29个）
- 空格符: \space、\t、\v、\n、\f (5个)
- 不能显示的字符: null(\0)、 alert(\a) 、bcakspace(\b)、 carriage return(\r)...

### 字符型数据的存储空间
| 类型 | 字节数｜取值范围｜ tips |
| ------ | ----- | -----｜----- |
| singed char | 1 | -2^7 ~ (2^7-1)| 这里的"-0"代表转换成补码就是-128，所以会出来一位｜
| unsinged char | 1 | 0 ~ (2^8-1) | --- ｜

