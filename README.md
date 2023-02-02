# C语言学习文件

### 001.HelloWorld
``` c
printf("Hello World!\n");
```
### 002.数据类型


|类型| short | int | char | float | double | long | long long |
|:------:|:------:|:------:|:------:|:------:|:------:|:------:|:------:|
|**字节长度**|**2**|**4**|**1**|**4**|**8**|**4**|**8**|

### 003.数学运算
```
当除数和被除数都是整数时，运算结果也是整数；
如果不能整除，那么就直接丢掉小数部分，只保留整数部分，这跟将小数赋值给整数类型是一个道理。
一旦除数和被除数中有一个是小数，那么运算结果也是小数，并且是 double 类型的小数。
```
### 004.输入输出
``` c
scanf()：和 printf() 类似，scanf() 可以输入多种类型的数据。
getchar()、getche()、getch()：这三个函数都用于输入单个字符。
gets()：获取一行数据，并作为字符串处理。
```
### 005.循环和选择结构
``` c
if switch while for
```
### 006.数组
``` c
sizeof() strlen()//获取数组长度
```

### 007.字符串
字符串输出
```c
printf() puts()
```
字符串输入
```c
gets()//认为空格也是字符串的一部分，只有遇到回车键时才认为字符串输入结束
scanf()// 读取字符串时以空格为分隔，遇到空格就认为当前字符串结束了
```