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

void two(int n)		//��������ȡ�෨
{	
	int res = n % 2; 
	if (n > 1)	//�����������ͻ���ɶ�ջ��� ��Ϊn�𽥱�С
	{
		two(n / 2);
	}
	putchar(res == 0 ? '0' : '1');
	return;
}
