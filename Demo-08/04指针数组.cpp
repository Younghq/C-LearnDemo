#include <stdio.h>

int main0004()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = {&a,&b,&c};
	printf("%d\n",*arr[0]);
	//������ ��������׵�ַ
	int arr1[] = {2,6,9};
	int arr2[] = {3,4,5};
	int arr3[] = {6,7,8};
	//ָ��������һ������Ķ�ά����ģ��
	int* arr4[] = {arr1 ,arr2,arr3};
	//���������ά����
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			//ʹ�ö���ָ��
			printf("%d ",*(*(arr4+i)+j));
		}
		printf("\n");
	}
	//ָ������Ͷ���ָ�뽨����ϵ
	int** p = arr4;
	//����ָ��ȡֵ
	printf("%d\n", *(*(p+1))+1 );
	return 0;
}
