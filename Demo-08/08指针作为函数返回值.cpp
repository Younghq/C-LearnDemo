#include <stdio.h>
#include <stdlib.h>


//声明测试函数
char* my_strchr(char *str,char ch);	//数组版本查找字符
char* my_strchr2(char* str, char ch);	//指针版本查找字符
char* my_str(char* str, char* findstr,int len);	//查找子串
char* my_str2(char* str, char* dest);

int main()
{
	char str[] = "hello worfuckldadad";
	char* p = str;
	char*res = my_strchr2(p, '2');
	char find[] = "fuck";


	char* res2 = my_str(str, find,3);
	printf("%s", res2);
}

//数组方式
char* my_strchr(char* str, char ch)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return &str[i];
		i++;
	}
	return NULL;
}

char* my_strchr2(char* str, char ch)
{
	while (*str != ch)
	{
		str++;
		if (*str == 0)
			return NULL;
	}
	return str;
}

char* my_str(char* str, char* findstr,int len) //好像是错的,不管了
{
	int i = 0;
	while (*str != 0)
	{
		if (*str == *findstr)
		{
			findstr++;
			i++;
		}
		else
		{
			i = 0;
			findstr - i;
		}
		if (i == len)
		{
			return str;
		}
		str++;
	}
	return NULL;
}

char* my_str2(char* str, char* dest)
{
	char* fsrc = str;	//记录源字符串地址
	char* rsrc = str;	//子串遍历地址
	char* tdest = dest;	//记录子串首地址
	while (*rsrc)
	{
		rsrc = fsrc; //地址
		while (*fsrc == *tdest && *fsrc != 0) //遍历源值 == 子串源值
		{
			fsrc++;
			tdest++;
		}
		if (*tdest == 0)
		{
			return rsrc;
		}
		//回滚
		tdest = dest;
		fsrc = rsrc;
		fsrc++;
	}
}
