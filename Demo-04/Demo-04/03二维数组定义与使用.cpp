#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main123123()
{
	//��ͬ��һά���� int arr[Ԫ�ظ���] ={};
	//��ά����:int arr[5][5] = {};
	int arr[2][3] = {
		{1,5,7},
		{2,6,9}
	};
	//������ά����
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	//��ά�����С ��*��*��������ռ���ֽ�
	printf("��ά�����С:%dbyte\n",sizeof(arr));
	//��ά����һ�д�С
	printf("��ά����һ�д�С:%dbyte\n",sizeof(arr[0]));
	//��ά����Ԫ�ش�С
	printf("��ά����Ԫ�ش�С:%dbyte\n", sizeof(arr[0][0]));
	//��ά��������
	printf("��ά��������:%d��\n", sizeof(arr) / sizeof(arr[0]));
	//��ά��������
	printf("��ά��������:%d��\n", sizeof(arr[0])/sizeof(arr[0][0]));
	return EXIT_SUCCESS;
}

int main1412312(void)
{
	int arr[2][3] = {
		   {1,5,7},
		   {2,6,9}
	};
	//��ά�����׵�ַ
	//��Ҫ�鿴�ڴ�`%p`��ʾ����ڴ��ַ���(�޷���16��������)��ռλ��,���ڴ湤�߲鿴Ĭ����`16����`�����Ķ�
	printf("%p\n", arr);
	printf("%p\n", arr[0]);
	//�� C �����У�����������������Ԫ�صĵ�ַ�����Ҫ�鿴������ĳ��Ԫ�صĵ�ַ������Ҫ���� & �������
	printf("%p\n", &arr[0][0]);
	//��Ҫ�޸Ķ�ά�������Ԫ��,�����Զ�ά����[][]�±긳ֵ

	//������ַ
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%p\t", &arr[i][j]);
		}
		printf("\n");
	}
	//����ʡ���� int arr[][3] = {1,2,3,4,5,6};
	return EXIT_SUCCESS;
}
int main()
{

}