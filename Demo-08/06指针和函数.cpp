#include <stdio.h>
#include <stdlib.h>

//测试 指针函数传递
void swap(int* a,int *b);

int main0006()
{
	int a = 258;
	int b = 666;
	swap(&a,&b);//传递指针
	printf("%d,%d",a,b);//打印 a:666 b:258
	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;	//临时变量
	*a = *b;
	*b = temp;
}
