#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int rfact(int n);
int rfacttest(int n);
int main1231412()
 {
	//int a, b;	//a:要求的阶乘数
	//int sum =1;
	//a = 5;
	//for (int i = 1; i <= a; i++)
	//{
	//	sum = sum*i;
	//}
	//printf("%d",sum);
	printf("%d", rfacttest(12));
	return EXIT_SUCCESS;
}

int rfact(int n)
{
	long ans;
	if (n>0)
	{
		ans = n * rfact(n-1);
	}
	else
	{
		ans = 1;
	}
	return ans;
}

int rfacttest(int n)	// n = 5
{	//(n - 1) * n
	long res =1;
	if (n > 0)
	{
		res = n * rfacttest(n - 1);		//5! = 5 * (5-1)
	}
	return res;
}
