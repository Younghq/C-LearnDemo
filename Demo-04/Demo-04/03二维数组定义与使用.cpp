#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main123123()
{
	//不同于一维数组 int arr[元素个数] ={};
	//二维数组:int arr[5][5] = {};
	int arr[2][3] = {
		{1,5,7},
		{2,6,9}
	};
	//遍历二维数组
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	//二维数组大小 行*列*数据类型占的字节
	printf("二维数组大小:%dbyte\n",sizeof(arr));
	//二维数组一行大小
	printf("二维数组一行大小:%dbyte\n",sizeof(arr[0]));
	//二维数组元素大小
	printf("二维数组元素大小:%dbyte\n", sizeof(arr[0][0]));
	//二维数组行数
	printf("二维数组行数:%d行\n", sizeof(arr) / sizeof(arr[0]));
	//二维数组列数
	printf("二维数组列数:%d列\n", sizeof(arr[0])/sizeof(arr[0][0]));
	return EXIT_SUCCESS;
}

int main1412312(void)
{
	int arr[2][3] = {
		   {1,5,7},
		   {2,6,9}
	};
	//二维数组首地址
	//若要查看内存`%p`表示输出内存地址编号(无符号16进制整数)的占位符,在内存工具查看默认是`16进制`方便阅读
	printf("%p\n", arr);
	printf("%p\n", arr[0]);
	//在 C 语言中，数组名称是数组首元素的地址。如果要查看数组中某个元素的地址，则需要加上 & 运算符。
	printf("%p\n", &arr[0][0]);
	//若要修改二维数组里的元素,必须以二维数组[][]下标赋值

	//遍历地址
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%p\t", &arr[i][j]);
		}
		printf("\n");
	}
	//可以省略行 int arr[][3] = {1,2,3,4,5,6};
	return EXIT_SUCCESS;
}
int main()
{

}