#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//声明 字符串拷贝函数
void my_strcpy(char * dest,char *ch);
int main0002()
{
	char ch[] = "hello world";
	char dest[100];
	my_strcpy(dest, ch);
	printf("原数组ch:%s\n", ch);
	printf("替换的dest:%s\n",dest);
	return EXIT_SUCCESS;
}
//定义 字符串拷贝函数
void my_strcpy(char* dest, char* ch)
{
	//循环拷贝
	/*int i = 0;
	while (ch[i] != 0)
	{
		dest[i] = ch[i]; 
		i++;
	}
	dest[i] = 0;*/
	//操作指针 拷贝字符串
	while (*ch!=0) {
		*dest = *ch;
		ch++;
		dest++;
	}
	*dest = 0;
	//究极简单版本
	/*while (*dest++ = *ch++);*/
}
