#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
// ����ֵ���� ������(�����б�)
//{
//	������
//	return 0;
// }
// <����Ҫд����ǰ��,��Ϊ��˳��ִ��>

//�вκ���
int array_size(int arr[]) {
	return sizeof(arr) / sizeof(arr[0]);
}
//�޲κ��� �޷���ֵ����
void print()
{
	printf("fuck you\n");
}
//ð��������
//�ں����ڲ�ʹ�� sizeof �����������鳤���Ǵ���ġ�������Ϊ������Ϊ�������ݸ�����ʱ�ᱻת��Ϊָ�룬����޷�ֱ�ӻ�ȡ����Ĵ�С��
void bubbleSort(int arr[],int length)
{
	int i, j, temp;
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length-i; j++)
		{
			if (arr[j] > arr[j + 1])	//��i������i+1��
			{
				//��ʱ����
				int temp = arr[j];
				arr[j] = arr[j+1];	//�����滻
				arr[j + 1] = temp;
			}
		}
	}
}

int main1241241525125()
{
	int arr[] = {1,4,5,2,1,4,12,687,21};
	bubbleSort(arr, sizeof(arr) / sizeof(arr[0]) - 1);	//�������ݲ���
	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)	//�������
	{
		printf("%d\t",arr[i]);
	}
	return EXIT_SUCCESS;
}

