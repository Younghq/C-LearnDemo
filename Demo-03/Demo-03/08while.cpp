#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main1512312()
{
	printf("��ӡ10���ڵ�����:");
	int i = 0;
	while (i < 10)
	{
		printf("%d\t", i);
		i++;
	}
	printf("\n");
	printf("��ӡ100�������е�ż��:");
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
	printf("��100����,3�ı���,��λ��3,ʮλ��3");
	int i = 0;
	while (i <= 100)
	{
		if(i%3==0 )
		{
			printf("%d\t", i);
		}
		else if (i % 10 == 3) {
			printf("%s\t", "��λ��3");
		}
		else if (i / 10 ==3)
		{
			printf("%s\t", "ʮλ��3");
		}
		i++;
	}
	return EXIT_SUCCESS;
}