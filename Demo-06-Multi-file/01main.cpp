#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#include "head.h"	//导入自己的函数

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", max(10, 20));
	printf("%d\n", min(a, b));
	return EXIT_SUCCESS;
}
