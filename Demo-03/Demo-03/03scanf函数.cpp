#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main1231541()
{	/*
	char ch;
	scanf("%c", &ch);
	putchar(ch);
	*/
	//&a 给指针赋值，使指针指向&a的地址
	int a, b;
	scanf("%d%d",&a,&b);//scanf不能加\n
	printf("%d\t%d",a,b);
	return 0;
}
int main15121(void) {
	char ch;
	//接收键盘获取字符
	ch = getchar();
	putchar(ch);
	//putchar 和 getchar 只对单一字符起作用
	return 0;
}
