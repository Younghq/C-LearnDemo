#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//1��break���ڷ�֧�ṹ�����������break������ʹ��������switch�ṹ������ִ��switch��������һ����䣻
//break������������ѭ��������;����ѭ���壬����ǰ����ѭ������������ִ��ѭ���������䡣
//2��continue��continue���������ѭ������ʣ�������ǿ��ִ����һ��ѭ��������
//������Ϊ��������ѭ����������ѭ������������δִ�е���䣬���Ž�����һ���Ƿ�ִ��ѭ�����ж���

//����continue ��100����ż��
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

//����goto ��100����ż��
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