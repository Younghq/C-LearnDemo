#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h> //�����
#include<math.h>
#include<time.h>

//����һ��50-100�������
int main1231123111555()
{
	srand((size_t)time(NULL));	//����������,�������������ͬ
	for (size_t i = 0; i < 100; i++)
	{
		printf("%d\n",rand()%51+50);	//rand()% ��λ�͵õ��䷶Χ�������
	}
	return EXIT_SUCCESS;
}
//˫ɫ�� 6������ 1-32 ���ظ� 1������ 1-16 �����ظ�
int main141241241111241()
{
	srand((size_t)time(NULL));
	int red[6] = {};	//��Ҫ��ʼ������
	int blue;
	int flag;
	int value;
	size_t j;
	for (size_t i = 0; i < 6;)
	{
		value = rand() % 32 + 1;	//��ȡ�����
		for (j = 0; j < i; j++)		//ѭ���ж��Ƿ�
		{
			if (red[j] == value)	//�����ж��Ƿ��ظ�
			{
				break;				//�ظ�����ѭ�� ��ʱj!=i 
			}
		}
		if (j == i)		//j==i �Ż�ִ�д��� Ҳ���ǲ��ظ������
		{
			red[i] = value;
			i++;
		}
	}
	blue = rand() % 16 + 1;
	printf("��ɫ��:");
	for (size_t i = 0; i < 6; i++)
	{
		printf("%d\t",red[i]);
	}
	printf("\n��ɫ��:%d", blue);
	return EXIT_SUCCESS;
}