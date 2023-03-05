#include <stdio.h>

//声明函数
void showArr(int* arr, int length);
void showArr2(int arr[], int length);


int main0001() {
	// 定义一个数组
	int arr[] = {12,2,9,3,5,10,7};
	// 数组名是一个常量 不允许赋值
	// 数组名是数组元素首地址
	int* p = arr;	
	//*p++ = p++ 返回上一个下标值
	//p++ = 地址进一位,丢弃上一位
	*p++;	//指针偏移1个int
	printf("%d\n", *p);	//自动加4个字节
	//调用指针-遍历数组函数
	showArr2(p, 7);
	showArr(arr, 7);
	//所有指针类型 相减都是int类型 求的指针偏移量
	int setp = p - arr;

	printf("%d\n", setp);
	return 0;
}
//p++ 和* p++ 的主要不同在于它们的操作顺序和返回值:
//p++ 操作先返回指针 p 指向的地址，然后将指针 p 的值加上一个整型变量的字节数，使其指向下一个元素的地址。
// 执行完 p++ 操作后，指针 p 指向了数组 arr 的第二个元素的地址。
//而* p++ 操作先将指针 p 的值加上一个整型变量的字节数，使其指向下一个元素的地址，然后返回指针 p 原来所指向的元素的值。
//执行完* p++ 操作后，指针 p 指向了数组 arr 的第二个元素的地址，同时表达式的返回值是指针 p 原来所指向的元素的值，即 12。



void showArr(int* arr,int length) 
{
	for (size_t i = 0; i < length; i++)
	{
		printf("%d ",*(arr+i));
	}
}
void showArr2(int arr[],int length)
{
	for (size_t i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
}