#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main123455()
{
	//sizeof 计算数据类型在内存中占得字节(byte)大小
	//格式:sizeof(数据类型) sizeof(变量名) 不建议:sizeof 变量名

	//一个BYTE(字节)是8个bit
	printf("整型:%d\n", sizeof(int));//整型:4字节=32bit
	printf("短整型:%d\n", sizeof(short));//短整型:2
	printf("长整型:%d\n", sizeof(long));//长整型:4
	printf("长长整型:%d\n", sizeof(long long));//长长整型:8
	return 0;
}
