#include <stdio.h>
#include <stdlib.h>


//声明-字符串首字母排序
void Sort(char ** str,int length);

int main0001()
{
	/*
	栈区:用于存放局部变量,传参,函数返回地址  .esp 始终指向栈顶,栈中的数据越多,esp的值越小;
	堆区:用于存放动态分配的对象,动态分配得到的内存区域附带有分配信息,可以自由释放和删除;
	数据区:全局,静态和常量是分配在数据区中的,数据区包括bss(未初始化数据区)和初始化数据区;
	代码区:存放函数体的二进制代码;
	*/
	char ch[] = "Hello World";	//栈区字符串
	char * p = (char*)"Hello World";	//数据区字符串->常量字符串
	//在数据区中 相同的常量不会重复开辟空间
	char ch1[] = "hello";	//这种是变量,可以直接修改
	//字符串常量地址不允许被修改,但可以通过指针修改地址指向另外一个元素地址
	char* ch2[] = { "world ","hello ","yanghouqi " };
	Sort(ch2,3);
	printf(ch2[0]);
	printf(ch2[1]);
	printf(ch2[2]);
	return 0;
}

void Sort(char** str,int length)	//二维字符串数组使用二级指针
{
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length-1-i; j++)
		{
			if (str[j][0] > str[j + 1][0])
			{
				char* temp = str[j];	//定义指针接收大于的地址
				str[j] = str[j+1];	//调换地址
				str[j + 1] = temp;
			}
		}
	}
}
