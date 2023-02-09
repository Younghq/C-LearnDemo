#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main14512412()
{
	//变量定义
	//数据类型 变量 = 值
	//数组定义
	//数据类型 数组名[元素个数]={值1,值2,值3}
	//一个int 元素占4个int空间
	//数组在内存中占的大小=数组类型*元素个数
	int arr[10] = { 9,4,2,1,8,5,3,6,10,7 };
	printf("内存地址:%p\n", &arr[0]);
	printf("数组元素大小:%d\n",sizeof(arr[0]));
	printf("数组总大小:%d\n", sizeof(arr));
	//数组遍历
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d\n",arr[i]);
	}
	//数组开辟的空间只能比总子元素大
	int arr1[5] = { 1 };//遍历后 未设置的空间默认为 0
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
	//定义一个数组大小必须使用常量 常量表达式
	// int i = 5;
	// int arr[i];
	// 数组必须预先知道大小 动态数组 -> 开辟堆空间
	const int n = 10;
	int arr[n] ;
	printf("------输入------\n");
	//遍历添加元素
	for (int i = 0 ; i < sizeof(arr)/ sizeof(arr[0]);i++)
	{
		printf("%d:",i);
		scanf("%d", &arr[i]);
	}
	printf("------输出------\n");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
	return EXIT_SUCCESS;
}

int main131415()
{	//数组下标越界
	//可能会报错
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	for (int i = 0; i < 20; i++)
	{
		printf("%d\n",arr[i]);
	}
	return EXIT_SUCCESS;
}
//十只小猪称体重-求最大值体重
int main151231()
{
	printf("请输入5只小猪体重:\n");
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	printf("输入完成,最大体重为:");
	//定义循环
	for (int i = 1; i < sizeof(arr) / sizeof(arr[1]); i++)
	{
		//拿到第一个体重
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return EXIT_SUCCESS;
}
//数组逆置
// 注意:非倒着输出
// 1.先用循环数组
// 2.取临时变量置换数组
// 3.再用一个循环输出数组
int main151241231()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int j = (sizeof(arr) / sizeof(arr[0])) -1;
	//只要i＞数组大小j就结束循环
	//也就是这里循环刚好是数组大小的一半,刚好替换完所有数组
	while (i < j)
	{
		//取零时变量
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		//索引变大
		i++;
		//索引变小
		j--;
	}
	//循环输出数组
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
	return EXIT_SUCCESS;
}
//冒泡排序
//1.确定最大值
//2.i和i+1比较,若i大就置换,整体遍历索引-1
int main14123131()
{
	int arr[10] = { -4,0,4,2,8,5,7,1,3,9 };
	int length = sizeof(arr) / sizeof(arr[0]) - 1;
	//外层控制行
	for (int i = 0; i < length - 1; i++)
	{
		//内层控制列
		for (int j = 0; j < length - i; j++)
		{
			//判断大小,满足则置换
			if (arr[j] > arr[j + 1])
			{
				//取临时变量
				int temp = arr[j];
				//数组逆置
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
//对冒泡排序的优化
// 1.使用 标志变量 来判断排序过程是否发生了交换
// 2.若没交换就 退出循环
// 此方法有效降低 时间复杂度 
//在本质上，冒泡排序是一个两层循环的算法，其中外层循环用于控制比较次数，内层循环用于比较两个相邻的元素，并在必要时交换它们的位置。
//如果在一轮循环中没有任何元素交换，那么我们就知道数组已经排序好了，因此不需要继续循环。我们可以通过定义标志变量来跟踪排序过程中是否发生交换。
int main1412415()
{
	int arr[10] = { -4,0,4,2,8,1,7,23,3,9 };
	int length = sizeof(arr) / sizeof(arr[0]) - 1;
	int sum = 0;
	//外层控制行
	for (int i = 0; i < length - 1; i++)
	{
		//加入标志变量
		bool flag = true;
		//内层控制列
		for (int j = 0; j < length - i; j++)
		{
			//判断大小,满足则置换
			if (arr[j] > arr[j + 1])
			{
				//取临时变量
				int temp = arr[j];
				//数组逆置
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				//给swag更新为1
				flag = false;
			}
		}
		//如果某次循环完,flag没有改变则直接跳出循环
		if (flag)break;
		//计算循环次数
		sum++;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("外层循环次数:%d\n", sum);
	return EXIT_SUCCESS;
}
//时间复杂度
//C语言程序的时间复杂度可以通过分析程序中执行次数最多的代码块来确定。
//常见的时间复杂度有O(1), O(n), O(logn), O(n^2)等。
//使用大O符号表示，它表示代码执行次数随数据规模的增长而增长的变化趋势。
//因此，确定时间复杂度需要对代码进行细致分析，计算循环次数，以及算法执行的关键步骤。