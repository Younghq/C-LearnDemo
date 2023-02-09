#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int mainadaf()
{
	//单精度浮点
	//单精度浮点数占用4个字节的空间，精度范围在6~7位左右
	//C语言中，如果一个浮点数的值不以"f"结尾，那么它将被默认为double类型。
	//因此，如果要将一个double类型的值赋给一个float类型的变量，则需要进行类型转换。
	float a = 3.14;
	//双精度
	//双精度浮点数占用8个字节的空间，精度范围在15~17位左右
	double b = 3.14;
	//输出
	printf("%.2f\n",a);
	printf("%1f\n", b);
	printf("float:%d字节\n", sizeof(a));
	printf("double:%d字节\n", sizeof(b));
	return 0;
}
int mainsdfa()
{
	int a = 10;
	float b = 3.14;
	// %p 表示输出内存地址编号(无符号16进制整数)的 占位符
	printf("a的内存地址:%p\n", &a);
	printf("b的内存地址:%p\n", &b);
	printf("int 大小:%d字节\n", sizeof(a));
	printf("float 大小:%d字节\n", sizeof(b));
	/*
	* 这句 C 语言代码是使用 printf 函数输出一个内存地址。
	"%p" 是一个格式化字符串，表示将后面的变量输出为指针地址。在这句代码中，后面的变量没有给出，所以会输出一个未定义的地址。
	"\n"是换行。
	*/
	//C语言中的getchar()函数是从标准输入(通常是键盘)读取下一个字符(一个字节)并将其作为整数返回。如果到达文件末尾或发生错误,则返回EOF。
	getchar();
	return 0;
}
	//内存里遵守 大小端对齐
	//问:为什么 C语言里 int类型的数是以二进制存储在内存里但是在内存里却是十六进制
	//C语言中 int 类型的数是以二进制存储在内存中, 但是在查看内存数据时我们通常会使用十六进制来查看数据, 因为二进制很难直接阅读和理解，而十六进制能更直观地表示二进制数据.

int main1231c() 
{
	float a = 3210.456;
	float b = 3.2e3f;
	//科学计数法输出 3.210456e+03
	printf("%e\n",a);
	printf("%e\n", b);
	return 0;
}