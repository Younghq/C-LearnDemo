#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main14512412()
{
	//��������
	//�������� ���� = ֵ
	//���鶨��
	//�������� ������[Ԫ�ظ���]={ֵ1,ֵ2,ֵ3}
	//һ��int Ԫ��ռ4��int�ռ�
	//�������ڴ���ռ�Ĵ�С=��������*Ԫ�ظ���
	int arr[10] = { 9,4,2,1,8,5,3,6,10,7 };
	printf("�ڴ��ַ:%p\n", &arr[0]);
	printf("����Ԫ�ش�С:%d\n",sizeof(arr[0]));
	printf("�����ܴ�С:%d\n", sizeof(arr));
	//�������
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d\n",arr[i]);
	}
	//���鿪�ٵĿռ�ֻ�ܱ�����Ԫ�ش�
	int arr1[5] = { 1 };//������ δ���õĿռ�Ĭ��Ϊ 0
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d\n", arr1[i]);
	}
	int arr2[10];
	for (int i = 0; i <= sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d\n", arr2[i]);
	}
	return EXIT_SUCCESS;
}
int main1412123()
{
	//����һ�������С����ʹ�ó��� �������ʽ
	// int i = 5;
	// int arr[i];
	// �������Ԥ��֪����С ��̬���� -> ���ٶѿռ�
	const int n = 10;
	int arr[n] ;
	printf("------����------\n");
	//�������Ԫ��
	for (int i = 0 ; i < sizeof(arr)/ sizeof(arr[0]);i++)
	{
		printf("%d:",i);
		scanf("%d", &arr[i]);
	}
	printf("------���------\n");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
	return EXIT_SUCCESS;
}

int main131415()
{	//�����±�Խ��
	//���ܻᱨ��
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	for (int i = 0; i < 20; i++)
	{
		printf("%d\n",arr[i]);
	}
	return EXIT_SUCCESS;
}
//ʮֻС�������-�����ֵ����
int main151231()
{
	printf("������5ֻС������:\n");
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	printf("�������,�������Ϊ:");
	//����ѭ��
	for (int i = 1; i < sizeof(arr) / sizeof(arr[1]); i++)
	{
		//�õ���һ������
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return EXIT_SUCCESS;
}
//��������
// ע��:�ǵ������
// 1.����ѭ������
// 2.ȡ��ʱ�����û�����
// 3.����һ��ѭ���������
int main151241231()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int j = (sizeof(arr) / sizeof(arr[0])) -1;
	//ֻҪi�������Сj�ͽ���ѭ��
	//Ҳ��������ѭ���պ��������С��һ��,�պ��滻����������
	while (i < j)
	{
		//ȡ��ʱ����
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		//�������
		i++;
		//������С
		j--;
	}
	//ѭ���������
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
	return EXIT_SUCCESS;
}
//ð������
//1.ȷ�����ֵ
//2.i��i+1�Ƚ�,��i����û�,�����������-1
int main14123131()
{
	int arr[10] = { -4,0,4,2,8,5,7,1,3,9 };
	int length = sizeof(arr) / sizeof(arr[0]) - 1;
	//��������
	for (int i = 0; i < length - 1; i++)
	{
		//�ڲ������
		for (int j = 0; j < length - i; j++)
		{
			//�жϴ�С,�������û�
			if (arr[j] > arr[j + 1])
			{
				//ȡ��ʱ����
				int temp = arr[j];
				//��������
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return EXIT_SUCCESS;
}
//��ð��������Ż�
// 1.ʹ�� ��־���� ���ж���������Ƿ����˽���
// 2.��û������ �˳�ѭ��
// �˷�����Ч���� ʱ�临�Ӷ� 
//�ڱ����ϣ�ð��������һ������ѭ�����㷨���������ѭ�����ڿ��ƱȽϴ������ڲ�ѭ�����ڱȽ��������ڵ�Ԫ�أ����ڱ�Ҫʱ�������ǵ�λ�á�
//�����һ��ѭ����û���κ�Ԫ�ؽ�������ô���Ǿ�֪�������Ѿ�������ˣ���˲���Ҫ����ѭ�������ǿ���ͨ�������־��������������������Ƿ���������
int main1412415()
{
	int arr[10] = { -4,0,4,2,8,1,7,23,3,9 };
	int length = sizeof(arr) / sizeof(arr[0]) - 1;
	int sum = 0;
	//��������
	for (int i = 0; i < length - 1; i++)
	{
		//�����־����
		bool flag = true;
		//�ڲ������
		for (int j = 0; j < length - i; j++)
		{
			//�жϴ�С,�������û�
			if (arr[j] > arr[j + 1])
			{
				//ȡ��ʱ����
				int temp = arr[j];
				//��������
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				//��swag����Ϊ1
				flag = false;
			}
		}
		//���ĳ��ѭ����,flagû�иı���ֱ������ѭ��
		if (flag)break;
		//����ѭ������
		sum++;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("���ѭ������:%d\n", sum);
	return EXIT_SUCCESS;
}
//ʱ�临�Ӷ�
//C���Գ����ʱ�临�Ӷȿ���ͨ������������ִ�д������Ĵ������ȷ����
//������ʱ�临�Ӷ���O(1), O(n), O(logn), O(n^2)�ȡ�
//ʹ�ô�O���ű�ʾ������ʾ����ִ�д��������ݹ�ģ�������������ı仯���ơ�
//��ˣ�ȷ��ʱ�临�Ӷ���Ҫ�Դ������ϸ�·���������ѭ���������Լ��㷨ִ�еĹؼ����衣