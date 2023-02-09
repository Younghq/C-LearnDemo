#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main1512312()
{
	printf("打印10以内的整数:");
	int i = 0;
	while (i < 10)
	{
		printf("%d\t", i);
		i++;
	}
	printf("\n");
	printf("打印100以内所有的偶数:");
	int s = 0;
	while (s <= 100)
	{
		if (s % 2 == 0) {
			printf("%d\t", s);
		}
		s++;
	}
	return EXIT_SUCCESS;
}
int main1231234(void) 
{
	printf("求100以内,3的倍数,个位有3,十位带3");
	int i = 0;
	while (i <= 100)
	{
		if(i%3==0 )
		{
			printf("%d\t", i);
		}
		else if (i % 10 == 3) {
			printf("%s\t", "个位带3");
		}
		else if (i / 10 ==3)
		{
			printf("%s\t", "十位带3");
		}
		i++;
	}
	return EXIT_SUCCESS;
}