#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//指针修改常量值
int main123414()
{
	//常量
	const int a = 100;
	//a = 100; 表达式必须是可修改的左值:变量

	//利用指针间接修改常量:栈区	  宏定义的常量是无法修改的:在数据区
	int* p = (int*) & a;	//报错可以转换地址 类型
	*p = 100;
	printf("%d",*p);
	return EXIT_SUCCESS;
}
//1.const修饰指针类型 
int main1121(void)
{
	int a = 10;
	int b = 20;
	//修饰指针类型:指向的数据是常量,不能被修改,但可以指向别的地址来修改
	const int* p = &a;	
	p = &b;		//
	printf("%d\n", *p);
	return EXIT_SUCCESS;
}
//2.const修饰指针变量
int main1129(void)
{
	int a = 10;
	int b = 20;
	//修饰指针变量:指针本身是常量,不能修改,但是指针指向的数据可以被修改
	int* const p = &a;
	*p = 100;
	printf("%d\n", a);
	return EXIT_SUCCESS;
}//总的来说，const修饰指针类型主要用于防止指针所指向的数据被修改，而const修饰指针变量主要用于防止指针本身被修改。
//3.既修饰指针也修饰变量
int main12314111112(void)
{
	int a = 10;
	int b = 20;
	//const 修饰指针类型 修饰指针变量
	const int* const p = &a;
	//p = &b;  必须可以修改的左值
	//*p = &b; 必须可以修改的左值

	//&是取地址符号是升维度的
	//*是取值符号是降维度的


	//二级指针修改
	printf("%d\n",*p);
	int** pp = (int**) &p;	
	//**p = &b;
	return EXIT_SUCCESS;
}