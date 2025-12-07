#ifndef STOCK_H
#define STOCK_H

#include<iostream>
#include<string>

class Stock{
    //Stock(const std::string &co, long n, double pr);//class 默认是私有的，只有在public之内才是公有的 
    //~Stock();
public:
    Stock();//默认的构造函数，没有默认构造函数的时候无法使用 Stock mystock; 形式来创建对象
    //函数重载
    Stock(const std::string &co, long n, double pr);//不需要返回类型,声明对象时自动执行，参数名也不能与私有成员变量名称相同
    // X！错误的实现 Stock(const std::string &company, long shares, double price);//参数不是类成员，而是赋给类成员的值，不能与类成员名称相同
    
    ~Stock();//析构函数，负责清理，如果构造函数使用了new，析构函数就要使用delete
            //没有
    void accquire(const std::string &co, long n, double pr);
    void bug(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show(void);
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    /*
    //类内定义，隐式内联
    void set_tot(){
        total_val = share_val * shares;
    }*/
    void set_tot();
};
//类外定义，需要显示内联
inline void Stock::set_tot()
{   
    total_val = share_val * shares;
}//内联函数

class listInit{
public:
    int num1;
    char char2;
    float float3;
    void show();
};

class constructor_DEF_TEST{
public:
    constructor_DEF_TEST();
    constructor_DEF_TEST(const std::string &co, int n, float pr);
    ~constructor_DEF_TEST();
    void show();

private:
    int shares;
    float share_val;
    std::string company;
};

class constructor_NO_DEF_TEST{
public:
    //constructor_NO_DEF_TEST();
    constructor_NO_DEF_TEST(const std::string &co, int n, float pr);
    ~constructor_NO_DEF_TEST();
    void show();

private:
    int shares;
    float share_val;
    std::string company;
};

class NO_const_NO_dest{//没有指定的构造函数和析构函数
public:
    void show();

private:
    std::string company;
    int shares;
    float share_val;
};

#endif