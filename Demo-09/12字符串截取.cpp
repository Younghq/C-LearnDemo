#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main0012()
{
	//Demo-使用库函数 strtok(str,0-截取字符)截取
	char ch[] = "你好,世界!!";
	char * p = strtok(ch,",");	//截取作用域会对src生效
	printf("ch地址:%p\n", ch);
	printf("截取之后p地址:%p\n",p);	//res:地址相同
	//Demo-重复截取筛选-懒得加偏移量了
	char ch2[] = "你好,世界!! 我是一个 大 学 生";
	char* p1 = strtok(ch2, " ");
	printf("截取之后p1串:%s\n", p1);
	char* p2 = strtok(p1, " ");
	printf("截取之后p2串:%s\n", p2);
	char* p3 = strtok(p2, " ");
	printf("截取之后p3串:%s\n", p3);
	char* p4 = strtok(p3, " ");
	printf("截取之后p4串:%s\n", p4);
	return 0;
}


