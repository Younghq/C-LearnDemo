#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main141241231()
{
	//gcc linux ����Ҫ����������
	//������ʽ����д���
	int j = 0;
	for (int i = 0; i < 10; i++,j+=2) 
	{
		printf("%d\n",i+j);
	}
	return EXIT_SUCCESS;
}
int main1451512341()
{
	//�����
	//����������������
	int i = 0;
	for (;; i++)
	{
		//��������һ��ѭ���жϷ���ѭ������
		if (i >= 10) {
			break;
		}
		printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}
//��ѭ�����ַ�ʽ
/*
	1:while(true)
	2:for(;;)
	3:loop: goto loop
*/

int main1152124() {
	//���������

	/*int rd = rand();
	printf("%d",rd);*/
	//1, ����ͷ�ļ� time.h
	//2, ������������
	//3, ��ȡ�����
	srand((unsigned int)time(NULL));//�����������,�������������ͬ
	//rand_max >= 32767
	//ȡ����λ������� % ����
	for(int i = 0; i <= 10; i++)
	{
		int rd = rand() % 10;//ȡʮλ
		printf("%d\n", rd);
	}
	return EXIT_SUCCESS;
}
//�����ְ���
int main12142512512()
{
	printf("��ӭ����������Ϸ\n����������µ�����:\n");
	//����Ҫ�µ�����
	int value;
	scanf("%d", &value);
	printf("�������\n��Ϸ��ʼ:\n");
	//�������������
	int num;
	//��ѭ��
	for (;;)
	{
		scanf("%d", &num);
		//�����������Ϸ�У��
		if (num > 100) 
		{
			printf("������һ�����ڵ�����!\n");
		}
		else if (num > value) 
		{
			if (num-value<=10) 
			{
				printf("�Ѿ��ǳ��ӽ���Ŷ!");
			}
			else {
				printf("����Ŷ!\n");
			}
		}
		else if (num < value) {
			if (value-num <= 10)
			{
				printf("�Ѿ��ǳ��ӽ���Ŷ!\n");
			}
			else
			{
				printf("С��Ŷ!\n");
			}
		}
		else
		{
			printf("��ϲ��!�¶���!");
		}
	}
	return EXIT_SUCCESS;
}
