#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
// 返回值类型 函数名(参数列表)
//{
//	代码体
//	return 0;
// }
// <函数要写在最前面,因为是顺序执行>

//有参函数
int array_size(int arr[]) {
	return sizeof(arr) / sizeof(arr[0]);
}
//无参函数 无返回值函数
void print()
{
	printf("fuck you\n");
}
//冒泡排序函数
//在函数内部使用 sizeof 函数计算数组长度是错误的。这是因为数组作为参数传递给函数时会被转换为指针，因此无法直接获取数组的大小。
void bubbleSort(int arr[],int length)
{
	int i, j, temp;
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length-i; j++)
		{
			if (arr[j] > arr[j + 1])	//第i个大于i+1个
			{
				//临时变量
				int temp = arr[j];
				arr[j] = arr[j+1];	//数组逆换
				arr[j + 1] = temp;
			}
		}
	}
}

int main1241241525125()
{
	int arr[] = {1,4,5,2,1,4,12,687,21};
	bubbleSort(arr, sizeof(arr) / sizeof(arr[0]) - 1);	//向函数传递参数
	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)	//遍历输出
	{
		printf("%d\t",arr[i]);
	}
	return EXIT_SUCCESS;
}

