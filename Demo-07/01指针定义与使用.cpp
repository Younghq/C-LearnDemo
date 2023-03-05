#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main123123121()
{
	int a = 0xaabbccdd;	//16进制 10 = 0xaabbccdd
	//a = 100;
	printf("%p\n", &a);
	getchar();
	return EXIT_SUCCESS;
}

int main1231231231(void)
{
	//定义指针变量存储变量地址
	int a = 10;//指针数据类型
	//指针类型 -> 数据类型*
	int* p;	
	//将a的地址赋值给p
	p = &a;
	*p = 100;
	printf("%p\n",&a);
	printf("%p\n",p);
	return EXIT_SUCCESS;
}

//使用地址运算符&取地址  使用间接运算符*拿到地址上的数据
int main12411515()
{
	int x = 10;
	int* a = &x;	//定义一个指针变量 指向x的地址
	int b = *a;		//定义一个整形变量b 用间接运算符取得a指向的地址上的 值数据    
	printf("%d", b);
	//printf("%d", sizeof(*a));
	return EXIT_SUCCESS;
}
//指针大小:
//使用sizeof()测量指针大小,得到的总是:4或8
// sizeof()测的是指针变量指向存储地址的大小
// 32位平台,所有指针地址都是32位(4字节)
// 64位平台,所有指针地址都是64位(8字节)

int main124121312()
{
	char ch = 'a';
	//int* p = (int*)&ch; 在定义指针一定要和变量对应上,4个字节的int类型存储1个字节的char地址,作用域始终是4个字节
	char * p = &ch;
	*p = 99;
	printf("获取地址上的值:%d\n",*p);
	printf("更改97位99后的值:%c\n", ch);
	return EXIT_SUCCESS;
}