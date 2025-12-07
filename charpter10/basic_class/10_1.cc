#include "stock.h"

int main(){
    //Stock myStock = {"AMD", 19, 12.45}; //报错，在使用列表初始化访问私有成员变量
    Stock myStock = Stock("AMD", 19, 12.45);//显式调用Stock（）构造函数

    Stock myStock1("Intel", 23, 17.82);//隐式调用，等价与上面

    listInit ll1{1, 65, 3};
    // listInit ll2{1.2, 12, 12.89776}; c++11列表初始化不允许窄化转换，C++传统的（）或者 = 都允许窄化转换。C语言可以通过编译但会产生警告，超出精度的部分会被截断
    
    ll1.show();

    myStock.accquire("NVIDIA", 20, 102.43);

    myStock.show();

    myStock.bug(15, 18.25);
    myStock.show();

    return 0;
    //kate.show();
    //joe.show();
}
