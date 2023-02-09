
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main1231231111()
{
	//演示数据类型的转换

	//隐转
	float p = 3.14;
	int w = 2;
	double sum = p * w;
	printf("%f\n", sum);
	//强转
	int sum1 = (int)(p * w);
	printf("%d\n", sum1);
	return 0;
}
