#include<stdio.h>

int main1234()
{
	//有正负符号(默认可省略):
	signed int a = -10;//log:-10
	//无符号(必须为正数,否则乱码 4294967286): 
	unsigned int b = 10;
	//%u 表示输出一个无符号十进制整型数据
	printf("%u\n",b);
	return 0;
}
//定义第二个函数 不能重名
int main112312(void)
{
	//进制
	//二进制:0-1,八进制:0-7,十六进制:0-9 10-15(a-f A-F)
	int a = 10;
	printf("%d\n", a);
	//占位符 %x 输出一个十六进制整形
	printf("%x\n", a);
	printf("%X\n", a);
	//占位符 %o 输出一个八进制整形
	printf("%o\n", a);
	/*
	log:10,a,A,12
	*/
	//定义八进制数据 以0开头
	int c = 0123;
	//定义十六精致数据 以0x开头
	int d = 0xabc;
	printf("%o\n", c);
	printf("%x\n", d);
	return 0;
}
