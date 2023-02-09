#include<stdio.h>
#pragma warning(disable:4996)
int main11234() {
	printf("请输入一个数字\n");
	int a;
	//通过键盘输入赋值
	//& 运算符 表示取地址运算符
	scanf("%d",&a);
	//
	printf("%d\n", a);
	return 0;
}
/*
** Scanf 安全问题 VS的 C4996 错误
由于微软在VS中已经不在建议使用C的传统库函数 scanf,strcpy,printf等,
所以直接使用这些库函数会提示 C4996 错误 -输入的可以是字符型执行整形算术会错误
解决办法1:
	使用 宏定义 约束警告 :
	#define _CRT_SECURE_NO_WARNINGS(最好放第一行)
解决办法2:
	#pragma warning(disable:4996)
*/