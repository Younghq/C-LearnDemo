#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


void updown(int);

int main1241241()
{
	updown(1);
	printf("µÝ¹éÍê³É");
	return EXIT_SUCCESS;
}

void updown(int a)
{
	printf("LEVER:%d\n", a);
	if (a<4)
	{
		updown(a + 1);
	}
	printf("%d555\n", a);
}
