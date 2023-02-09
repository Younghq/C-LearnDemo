#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//1、break：在分支结构程序设计中用break语句可以使流程跳出switch结构，继续执行switch语句下面的一个语句；
//break语句可以用来从循环体内中途跳出循环体，即提前结束循环操作，接着执行循环下面的语句。
//2、continue：continue语句是跳过循环体中剩余的语句而强制执行下一次循环操作。
//其作用为结束本次循环，即跳过循环体中下面尚未执行的语句，接着进行下一次是否执行循环的判定。

//利用continue 求100以内偶数
int main123123141512()
{
	for (int i = 0; i <= 100; i++)
	{
		if(i % 2 != 0)
		{
			continue;
		}
		printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}

//利用goto 求100以内偶数
int main141213()
{
	int i = 1;
	loop:
	if (i < 100)
	{
		i += 1;
	}
	else
	{
		return false;
	}
	if (i % 2 != 0)
	{
		printf("%d\n",i);
	}
	goto loop;
	return EXIT_SUCCESS;
}