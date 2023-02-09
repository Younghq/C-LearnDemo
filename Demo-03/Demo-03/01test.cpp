#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main12312313()
{
	/*三种定义方式*/
	/*
	1.字符数组. .a[4]
	2.常量指针定义 const
	*/
	char a[11] = "a123456789";
	const char * b = "a2\0";//遇到占位符 \0 停止
	printf("%s\n", a);
	printf("%s\n", b);
	return 0;
}


