#include <stdio.h>
#include <stdlib.h>

void my_strcat(char * ch1,char *ch2);	//数组版本
void my_strcat2(char* ch1, char* ch2);	//指针版本
void my_strcat3(char* ch1, char* ch2);	//指针作为循环条件版本
void remove_space(char *ch);
void remove_space2(char* ch);

int main0007() 
{
	char arr1[100] = "hello";	//数组大小是常量
	char arr2[] = "world\n";
	my_strcat3(arr1,arr2);
	printf(arr1);
	char ch[] = " 哈 哈   你个 牛 马     !";
	remove_space2(ch);
	printf(ch);
	return 0;
}

//实现字符串拼接--数组版本
void my_strcat(char* ch1, char* ch2)
{
	int i = 0,j=0;
	while (ch1[i]!=0)//求出第一个字符串数组长度
	{
		i++;
	}
	while(ch2[j] != 0)
	{
		//接上字符串
		ch1[i + j] = ch2[j];
		j++;
	}
}
//实现字符串拼接--指针操作 单循环版本
void my_strcat2(char* ch1, char* ch2)
{
	while (*ch2 != 0)
	{
		if (*ch1 == 0)
		{
			*ch1 = *ch2;
			ch2++;
		}
		ch1++;
	}
}
//直接以循环条件作为执行语句(真的6版本)
void my_strcat3(char* ch1, char* ch2)
{
	while (*ch1)ch1++;
	while (*ch1++ = *ch2++);
}

void remove_space(char* ch)	//指针版本
{
	char arr[100] = {0};	//定义辅助空间
	char* temp = ch;	//存储原地址
	int i = 0,j = 0;
	while (*ch != 0)	//直接对原地址进行操作
	{
		if (*ch != 32)
		{
			arr[i] = *ch;
			i++;
		}
		ch++;
	}
	//覆盖操作
	while (*temp != 0)	//ch地址被改变
	{
		*temp = *(arr+j);	//使用temp存的ch地址
		j++;
		temp++;
	}
	*temp = 0;
}
void remove_space2(char* ch) //指针优化版本
{
	char* ftemp = ch;	//遍历指针
	char* rtemp = ch;	//存储原地址指针方便覆写
	while (*ftemp)
	{
		if (*ftemp != ' ')
		{
			*rtemp = *ftemp;
			rtemp++;	//指针偏移
		}
		ftemp++;
	}
	//低位+0 限制为字符串
	*rtemp = 0;
}

