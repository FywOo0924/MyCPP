#include<iostream>
#include<string>

#include<cstring>

int main(){
    //using namespace std;
    //string和字符数组相比的优势是可以声明为简单变量    
    char char1[] = "Hello, World";
    char char2[20];
    std::string str1 = "Hello,World";
    std::string str2;

    std::string str3{"hello universe"};//同样支持C++11的列表初始化


    std::cout << "Char[] char1: " << char1 << std::endl;
    std::cout << "std::string str1 :" << str1 << std::endl;

    std::cout << "string's fourth element is : " << str1[3] << std::endl; //string对象也可以引用下标

    str2 = str1;
    std::cout << "After copy, str2 is : " << str2 <<std::endl;

    //char2 = char1;
    //char1 和 char2 是数组名，实际上是一个指向数组首元素的"常量"指针，不能作为左值被重新赋值



}
