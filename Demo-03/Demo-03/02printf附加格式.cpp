#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main12312312()
{
	int a = 10;
	//左对齐就是%-5d,右对齐%5d,意味数整体向左空5位对齐
	printf("---%5d---\n",a);
	float b = 3.14f;
	//7表示整体的宽度.2表示小数点多少位
	printf("---%-7.5f---\n", b);
	//输出一个字符 可以是变量 字符 数字 转义字符
	char ch = 'a';
	putchar(ch);
	//输出99对应的asic "c"
	putchar(99);//不能超出字符取值范围
	return 0;
}
