//
//  main.cpp
//  C++基本语法
//
//  Created by 王江磊 on 2017/1/5.
//  Copyright © 2017年 wenhua. All rights reserved.
//

#include <iostream>

using namespace std;  // 告诉编译器使用 std 命名空间

typedef int feet;

int main(int argc, const char * argv[]) {
    
    // 1、本实例使用了 endl，这将在每一行后插入一个换行符，<< 运算符用于向屏幕传多个值。我们也使用 sizeof() 函数来获取各种数据类型的大小
    
    /*
    std::cout << "Hello, World!\n";
    
    cout << "你好，C++" << endl ;
    
    cout << "Size of char : " << sizeof(char) << endl;
    
    cout << "Size of int : " << sizeof(int) << endl;
    
    cout << "Size of short int : " << sizeof(short int) << endl;
    
    cout << "Size of long int : " << sizeof(long int) << endl;
    
    cout << "Size of float : " << sizeof(float) << endl;
    
    cout << "Size of double : " << sizeof(double) << endl;
    
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    
    */
    
    
    //2、您可以使用 typedef 为一个已有的类型取一个新的名字
    
    feet distance;
    
    distance = 10;
    
    printf("%d\n",distance);
    
    //3、枚举类型 (enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合
    
    
    enum color {
        red = 4,
        green,
        blue,
    };
    
    color c = green;
    
    printf("c = %d\n",c);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
