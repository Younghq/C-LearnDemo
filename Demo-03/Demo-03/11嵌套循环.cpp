#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include <windows.h> //win头文件

//模拟电子时钟
int main12451512()
{
	
	char str[] = "";
	for (int i = 0; i <= 24; i++)
	{
		for (int j = 0; j <= 60; j++)
		{
			for (int k = 0; k <= 60; k++) 
			{
				//休眠
				Sleep(1000);
				//清屏
				system("cls");
				//02的意思是如果输出的整型数不足两位，左侧用0补齐
				printf("%02d:%02d:%02d\n", i, j,k);
			}
			
		}
	}
	return EXIT_SUCCESS;
}
//99乘法表
int main15412512412()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-4d",j,i,i*j);
			
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//输出100-200之间所有的素数
int main1412()
{
	//素数:质数又称素数。一个大于1的自然数，除了1和它自身外
	//不能被其他自然数整除的数叫做质数;否则称为合数。
	int i, j;               //定义循环变量
	for (i = 100; i <= 200; i++)              //定义从100-200之间的循环数字
	{
		for (j = 2; j < i; j++)          //判定条件从(2)---(i-1)之间能否被i整除
		{
			if (i % j == 0) break;        //如果可以则跳出循环，不是素数
		}
		if (j >= i)
		{
			//如果j>=i则为素数，并输出
			printf("%d\t", i);     //用表格的形式输出结果
		}
	}
	return EXIT_SUCCESS;
}

//打印正方形
int main1241231()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//正左直角三角形
int main15121231()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//正右直角三角形
int main15123131233()
{
	for (int i = 1; i <= 5; i++)
	{
		//这次循环是倒序输出空格
		for(int j = 5 ; i<=j ;j--)
		{
			printf(" ");
		}
		//输出空格后正序打印星号
		for (int k = 1; i >= k; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//打印金字塔
//       *
//	    ***
//	   *****
//    *******
//	 *********
//  笨办法
int main1512412312()
{
	for (int i = 1; i <= 5; i++)
	{
		//这次循环是倒序输出空格
		for (int j = 5; i <= j; j--)
		{
			printf(" ");
		}
		//输出空格后正序打印星号
		for (int k = 1; i >= k; k++)
		{
			printf("*");
		}
		for (int h = 2; h <= i; h++) 
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
// 好点的解法
int main12412123()
{
	for (int i = 1; i <= 5; i++)
	{
		//这次循环是倒序输出空格
		for (int j = 5; i <= j; j--)
		{
			printf(" ");
		}
		//对比上面的右直角三角形,横向每行都是 i*2-1 个
		for (int k = 1; k <= i*2-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//倒左直角三角形
int main15123123()
{
	for (int i = 5; i >= 0; i--)
	{
		for (int j = 1; j <=  i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//倒右直角三角形
int main1412341451()
{
	for (int i = 1; i <= 5 ; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int k = 5; k >= i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//菱形
int main()
{
	//一个正金字塔三角一个倒金字塔三角 2i-1
	for (int i = 1; i <= 5; i++)
	{
		//负责正三角空格
		for (int j = 5; j >= i;j--)
		{
			printf(" ");
		}
		//负责倒三角空格
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 5; i >= 1; i--)
	{
		//负责正三角空格
		for (int j = 6; j >= i; j--)
		{
			printf(" ");
		}
		//负责倒三角空格
		for (int k = 1; k <= 2 * i-3; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}