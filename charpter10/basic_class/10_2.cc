#include "stock.h"

//参数为1 ：演示函数重载的默认构造函数
//参数为2 ：演示非默认构造函数
//参数为3 ：演示编译器自动生成的构造函数和析构函数

#define NO_DEF_CONSTRUCTOR 0

int main(int argv, char *argc[]){//argv为参数数量 argc为参数内容，argc[0]是程序名
    //有默认构造函数的类
    if(argv == 2){ 
        std::cout << "参数数量正确" << std::endl;
        std::cout << "参数选择为：" << argc[1] << std::endl;

        if(std::stoi(argc[1]) == 1){
            constructor_DEF_TEST test2;//采用默认构造函数
            test2.show();
        }

        if(std::stoi(argc[1]) == 2){
            constructor_DEF_TEST test1("NVIDIA", 200, 123.3);
            test1.show();
        }
        
        if(std::stoi(argc[1]) == 3){
            NO_const_NO_dest test3;
            test3.show();
        }
    
    }
#if NO_DEF_CONSTRUCTOR 
    constructor_NO_DEF_TEST test; //无法匹配到构造函数，因为此种声明方法需要默认构造函数；
    constructor_NO_DEF_TEST test1();//注意与非默认构造的隐式调用区分开
#endif  
}