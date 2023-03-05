#include <stdio.h>

int main0004()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = {&a,&b,&c};
	printf("%d\n",*arr[0]);
	//数组名 是数组的首地址
	int arr1[] = {2,6,9};
	int arr2[] = {3,4,5};
	int arr3[] = {6,7,8};
	//指针数组是一个特殊的二维数组模型
	int* arr4[] = {arr1 ,arr2,arr3};
	//遍历这个二维数组
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			//使用二级指针
			printf("%d ",*(*(arr4+i)+j));
		}
		printf("\n");
	}
	//指针数组和二级指针建立关系
	int** p = arr4;
	//二级指针取值
	printf("%d\n", *(*(p+1))+1 );
	return 0;
}
