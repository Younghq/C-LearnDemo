#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>



int main131231231()
{
	//32位x86大小是4 64位x64大小是8
	printf("万能指针在内存占的字节大小:%d\n",sizeof(void*));
	int a = 10;
	void* p = &a;	//万能指针可以接收任意类型变量的内存地址,但你向修改变量的值的时要转换对应类型
	//* p = 100;	报错:非法寻址,void非数据类型
	*(int*)p = 100;
	printf("a的值:%d", *(int*)p);
	return EXIT_SUCCESS;
}
