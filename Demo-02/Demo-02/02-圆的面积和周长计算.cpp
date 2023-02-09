#include<stdio.h>
#define PI 3.14
//宏定义常量
//C语言:#define
//C++ constexpr auto 是 C++11 中新增的关键字，它用于声明一个变量或函数是常量表达式。如果一个变量或函数被声明为 constexpr，那么它的值或返回值在编译时就可以确定，不需要在运行时计算。这个关键字可以确保编译器优化常量表达式，并且提高程序的运行效率。
//constexpr auto pi = 3.1415926;

int main2()
{
	//圆的面积 s = pi * r * r
	//圆周长   l = 2 * pi * 
	float radius = 5;
	float result1 = PI * radius * radius;
	float result2 = 2 * PI * radius;
	//浮点数占位符 %f  %.2f 代表保留小数点两位
	printf("圆面积:%.2f\n", result1);//四舍五入只有c语言才会
	printf("圆周长:%.2f\n", result2);
	return 0;
}