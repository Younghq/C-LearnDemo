#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	//使用char是因为char刚好有8位也就是1字节 方便我们原码 0000 0000
	char ch = 10;
	printf("%c\n", ch);//使用%c打印字符型是无法打印的,因为10是控制字符
	printf("%d\n", ch);
	printf("%p\n", &ch);
	return 0;
}
