//
//  main.cpp
//  C++基本语法
//
//  Created by 王江磊 on 2017/1/5.
//  Copyright © 2017年 wenhua. All rights reserved.
//

#include <iostream>
#include "Person.cpp"
#include <stdio.h>



using namespace std;  // 告诉编译器使用 std 命名空间

typedef int feet;

int maxIn(int a, int b); // 函数声明;

void fetchData(string, string *);

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
    
    /*
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
    
    
    printf("max -> %d \n",maxIn(10, 20));
    
    
    
//  左值（lvalue）：指向内存位置的表达式被称为左值（lvalue）表达式。左值可以出现在赋值号的左边或右边。

//  右值（rvalue）：术语右值（rvalue）指的是存储在内存中某些地址的数值。
    
    
    
    int area = LENGTH * WIDTH;
    
    cout << area;
    
    cout << NEWLINE;
    
    printf("%d\n",HEIGHT);
    
    
    
    short int x ;
    
    short unsigned int y;
    
    y = 20000;
    
    x = y;
    
    printf("x->%d y->%d",x,y);
    */
    
    /*
    int i = 10;
    int j = i;
    
    printf("i = %d",j);
    
    int k = i;
    
    printf("i = %d\n",k);
    
    const int size = 100;
    
    int arr[size];
    
    printf("sizeof(arr) -> %lu\n",sizeof(arr));
    
    int * ptr = (int *) malloc(sizeof(arr));
    
    ptr[0] = 10;
    
    ptr[1] = 100;
    
    printf("%d \n",*ptr);
    
    string error;
    
    fetchData("", &error);
    
    printf("error->%s\n",error.c_str());
    */
    
    int mount;
    auto int month;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}


void fetchData(string name , string *  errorMsg){
    *errorMsg = "12345";
}


//函数实现
int maxIn(int a, int b){
    if (a > b) {
        return  a;
    }
    return b;
}
