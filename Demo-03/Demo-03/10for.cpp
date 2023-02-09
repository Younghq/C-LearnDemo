#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main141241231()
{
	//gcc linux 索引要定义在外面
	//运算表达式可以写多个
	int j = 0;
	for (int i = 0; i < 10; i++,j+=2) 
	{
		printf("%d\n",i+j);
	}
	return EXIT_SUCCESS;
}
int main1451512341()
{
	//空语句
	//将条件定义在外面
	int i = 0;
	for (;; i++)
	{
		//将进行下一次循环判断放在循环体中
		if (i >= 10) {
			break;
		}
		printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}
//死循环几种方式
/*
	1:while(true)
	2:for(;;)
	3:loop: goto loop
*/

int main1152124() {
	//产生随机数

	/*int rd = rand();
	printf("%d",rd);*/
	//1, 导入头文件 time.h
	//2, 添加随机数种子
	//3, 获取随机数
	srand((unsigned int)time(NULL));//设置随机种子,否则随机数会相同
	//rand_max >= 32767
	//取多少位随机数就 % 多少
	for(int i = 0; i <= 10; i++)
	{
		int rd = rand() % 10;//取十位
		printf("%d\n", rd);
	}
	return EXIT_SUCCESS;
}
//猜数字案例
int main12142512512()
{
	printf("欢迎来到猜数游戏\n请输入你想猜的数字:\n");
	//设置要猜的数字
	int value;
	scanf("%d", &value);
	printf("输入完毕\n游戏开始:\n");
	//设置输入的数字
	int num;
	//死循环
	for (;;)
	{
		scanf("%d", &num);
		//进行输入数合法校验
		if (num > 100) 
		{
			printf("请输入一百以内的数字!\n");
		}
		else if (num > value) 
		{
			if (num-value<=10) 
			{
				printf("已经非常接近了哦!");
			}
			else {
				printf("大了哦!\n");
			}
		}
		else if (num < value) {
			if (value-num <= 10)
			{
				printf("已经非常接近了哦!\n");
			}
			else
			{
				printf("小了哦!\n");
			}
		}
		else
		{
			printf("恭喜你!猜对了!");
		}
	}
	return EXIT_SUCCESS;
}
