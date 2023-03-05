#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//声明函数
//求字符串中空格个数
int get_space(char* ch);
//统计所有字符串出现次数
void get_count(char * ch);

int main0005()
{
	//Demo-获取空格个数
	char ch[] = "  hello   world  ";
	int space = get_space(ch);
	printf("%d\n",space);

	//Demo-统计字符串中每个小写字符出现的个数
	char ch1[] = "aabdddcdefghijk";
	get_count(ch1);
	return 0;
}
//返回字符串空格个数
int get_space(char* ch)
{
	int count = 0;
	while (*ch)
	{
		if (*ch == ' ')
		{
			count++;
		}
		ch++;
	}
	return count;
}
//
void get_count(char* ch)
{
	//先对字符串指针进行计数
	int len = 0;
	while (*ch != 0)
	{
		len++;
		ch++;
	}
	//修正偏移量
	ch -= len;
	int arr[26] = {0};//存放26个字符出现的次数
	//遍历每个字符
	for (size_t i = 0; i < len ; i++)
	{
		//ACill码减去a的值
		//就是在26个英文字母的排序,作为索引直接累加
		arr[ch[i] - 'a']++;
	}
	//遍历输出
	for (size_t i = 0; i < len; i++)
	{
		if (arr[i])
		{
			printf("字母:%c 出现了 %d次\n",i+'a',arr[i]);
		}
	}
}
