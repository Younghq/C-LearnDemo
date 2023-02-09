#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//宏定义函数
#define MAX(a,b) (a)>(b)?(a):(b)

int main12315415()
{
	int a = 10;
	int b = 20;
	/* 一次判断无需else加括号
	if (a < b) {
		printf("111");
	}
	else
		printf("222");
	*/
	//三目运算符 表达式1?表达式2:表达式3
	//若为真则表达式2,为假则表达式3
	printf("最大值:%d\n",a>b ? a:b);
	//功能单一,但代码量极小
	  
	//使用宏定义函数
	printf("最大值:%d\n",MAX(a,b));
	
	return 0;
}
