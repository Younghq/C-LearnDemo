#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//Demo-使用<stdlib.h>库函数 atoi()
	//功能:将字符串为"1000" 转换成1000,只能存在数字的字符串,只识别10进制整数
	char* str = "   -12-345a1";
	int n = atoi(str);//第一位可以忽略空格,且纯数字字符串才可以转,遇到或空格字符或'-'会断
	printf("%d\n", n);
	long m = atoi(str);
	printf("%d\n", m);
	return EXIT_SUCCESS;
}
