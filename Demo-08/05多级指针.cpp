#include <stdio.h>
#include <stdlib.h>
//多级指针
int main0005()
{
	int a = 10;
	int b = 20;
	int* p = &a;
	int** pp = &p;
	p = &b;	//间接改变地址指向 &b
	**pp = 100;	//改变二级指针pp 指向的&b 地址上的值
	printf("%d", **pp);
	//可以有多级指针,但不能多级&&&
	return 0;
}