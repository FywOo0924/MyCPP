#include<iostream>
#include<string>
#include<cstring>

//This file is about array's name decay to pointer
//关于数组名退化问题

//何时退化，何时不退化

/*退化：
    1\作为函数参数传递    void func(char* p) 可以接收 arr
    2\在赋值表达式中      arr = ... 中arr退化为常量指针
    */

/*不退化：
    1\作为sizeof的操作数    sizeof(arr) 返回数组总大小
    2\作为&的操作数         &arr 的类型是 char(*)[10]
    3\数组初始化时          char arr[10] = "hello";
    */
int main(){




}