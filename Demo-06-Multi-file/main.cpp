#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#include "main.h"
#define Width 40

int main()
{
	char str[] = "��ӭʹ��ǿʢ����ϵͳ";

	bar('/', Width);		//б��
	printf("\n");	//����
	space((Width - sizeof(str))/2);		//Ԥ���ո�
	printf(str);	
	printf("\n");	//����
	bar('-',Width);		//����
	//�������Ŀ¼һ��һ��
	char cmd[] = "\n0:�˳�\n1:�鿴���п����\n";
	//��������б�
	printf(cmd);
	//�����ⲿ����
	bool qt = false;	//������ѭ���˳�
	bool close = false;		//����ȷ������
	while (!qt)
	{	
		bar('-', Width);		//����
		printf("\n");//����
		int i = getchar() - '0'; 	//��������
		getchar();
		switch (i)
		{
		case 0:
		{
			printf("ȷ���˳���? 0:���� 1:ȷ��\n");//����
			int n = getchar() - '0'; 	//��������
			getchar();
			if (n == 1)	//ѯ���Ƿ��˳�
			{
				qt = true;
			}
			break;
		}
		case 1: 
		{
			printf("���������п�����:");//����
			int num;
			scanf("%d", &num);
			printf("%d\n",num);
			break;
		}
			
		}
	}
	printf("ϵͳ�����˳�\n�˳��ɹ�!");
	return EXIT_SUCCESS;
}
