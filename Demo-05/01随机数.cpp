#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h> //随机数
#include<math.h>
#include<time.h>

//产生一个50-100的随机数
int main1231123111555()
{
	srand((size_t)time(NULL));	//添加随机种子,否则随机数会相同
	for (size_t i = 0; i < 100; i++)
	{
		printf("%d\n",rand()%51+50);	//rand()% 几位就得到其范围的随机数
	}
	return EXIT_SUCCESS;
}
//双色球 6个红球 1-32 不重复 1个蓝球 1-16 可以重复
int main141241241111241()
{
	srand((size_t)time(NULL));
	int red[6] = {};	//需要初始化数组
	int blue;
	int flag;
	int value;
	size_t j;
	for (size_t i = 0; i < 6;)
	{
		value = rand() % 32 + 1;	//获取随机数
		for (j = 0; j < i; j++)		//循环判断是否
		{
			if (red[j] == value)	//依次判断是否重复
			{
				break;				//重复跳出循环 此时j!=i 
			}
		}
		if (j == i)		//j==i 才会执行代码 也就是不重复才添加
		{
			red[i] = value;
			i++;
		}
	}
	blue = rand() % 16 + 1;
	printf("红色球:");
	for (size_t i = 0; i < 6; i++)
	{
		printf("%d\t",red[i]);
	}
	printf("\n蓝色球:%d", blue);
	return EXIT_SUCCESS;
}