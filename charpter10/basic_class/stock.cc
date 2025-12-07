#include "stock.h"
#include <iostream>
#include <iterator>

int company;

Stock::Stock()
{
    company = "Error";
    shares  = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
    using std::cout;
    company = co;
    
    if(n < 0){
        std::cerr << "Number of shares cam;t be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    }
    else{
        shares = n;
    }
    share_val = pr;
    set_tot();
}

Stock::~Stock(){
    std::cout << "Bye!\n" <<std::endl;
}

void Stock::accquire(const std::string &co, long n, double pr)
{
    company = co; //company，类中的成员变量可以可以直接用吗，不用担心冲突吗
                  //优先查找类中的成员变量，如果想访问int company可以使用 ::company(全局作用域解析)
                  // company = co 等价于 this->company = co
    if(n < 0){
        std::cout << "Number of shares can't be Negative;"
                  << company << "shares set to 0\n";
        shares = 0;
    }
    else{
        shares = n;
    }

    share_val = pr;
    set_tot();
}


void Stock::bug(long num, double price)
{
    if(num < 0){
         std::cout << " Error Aborted" <<std::endl;
    }
    else{
        shares += num;
        share_val = price;
        set_tot();
    }
}


void Stock::sell(long num, double price)
{
    using std::cout;
    if(num < 0){
        cout << "NUmber of shares sold can't be negative"
             << "Transaction is aborted\n";
    }else if(num > shares){
        cout << "You can't sell more than you have"
             << "Transaction is aborted\n";
    }
    else{
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}


void Stock::show(void)
{
    std::cout << "Company: " << company
              << "Shares : " << shares
              << "Share Price : $" << share_val
              << "Total Worth : $" << total_val << "\n";
}   


void listInit::show()
{
    using std::cout;
    cout << "Char :" << char2 
         << "Int  :" << num1
         << "float :" << float3 << std::endl;
}

constructor_DEF_TEST::constructor_DEF_TEST(){
    company = "Error";
    shares = 0;
    share_val = 0.0;
}

constructor_DEF_TEST::constructor_DEF_TEST(const std::string &co, int n, float pr)
{
    company = co;
    shares = n;
    share_val = pr;
}

constructor_DEF_TEST::~constructor_DEF_TEST(){

}

void constructor_DEF_TEST::show(){
        using std::cout;
    cout << "Char :" << company
         << " Int  :" << shares
         << " float :" << share_val << std::endl;
}


void NO_const_NO_dest::show(){
    using std::cout;
    cout << "Char :" << company
         << " Int  :" << shares
         << " float :" << share_val << std::endl;

}