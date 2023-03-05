#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//声明函数
//声明字符串逆置函数
void inverse(char * ch);
void inversePoint(char* ch);
//声明回文字符串判断函数
int symm(char *ch);


int main0006()
{
	//Demo-字符串逆置-数组版本
	char str[] = "123456";
	inverse(str);
	printf("%s\n",str);    //res:654321
	//Demo-字符串逆置-指针版本
	char str2[] = "abcdefg";
	inverse(str2);
	printf("%s\n", str2);
	//Demo-回文字符串判断
	char str3[] = "abcba";
	char str4[] = "asdasd";
	int res = symm(str3);
	int res2 = symm(str4);
	printf("%s是回文?:%d\n",str3, res);
	printf("%s是回文?:%d\n", str4, res2);
	return 0;
}

//数组-字符串逆置
void inverse(char* ch)
{
	int i = 0;
	int j = strlen(ch)-1;
	while (i < j)
	{
		//每次循环都取当前变量
		char temp = ch[i];
		//指向j
		ch[i] = ch[j];
		ch[j] = temp;
		i++;
		j--;
	}
	return;
}

//指针-字符串逆置
void inversePoint(char* ch)
{
	char* start = ch;	//起始位置
	char* terminus = ch+strlen(ch)-1;	//终点位置
	//循环
	while(*start < *terminus)//起始位大于就退出循环
	{
		//取起始位置的值
		char temp = *start;
		//置换-将初位指向末位
		*start = *terminus;
		*terminus = temp;
		//初位进位,末位减位
		start++;
		terminus--;
	}
}

//回文字符串判断函数
int symm(char* ch)
{
	char* start = ch;	//起始位置
	char* terminus = ch + strlen(ch) - 1;	//终点位置

	while (*start < *terminus)
	{
		if (*start != *terminus)//若初位和末位不同
		{
			return -1;	//返回-1 表示非回文字符串
		}
		start++;
		terminus--;
	}
	return 1;
}
