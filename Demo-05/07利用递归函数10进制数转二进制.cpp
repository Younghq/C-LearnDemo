#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


void two(int n);

int main1241241241()
{
	two(10);
	return EXIT_SUCCESS;
}

void two(int n)		//除二反序取余法
{	
	int res = n % 2; 
	if (n > 1)	//不设置条件就会造成堆栈溢出 因为n逐渐变小
	{
		two(n / 2);
	}
	putchar(res == 0 ? '0' : '1');
	return;
}
