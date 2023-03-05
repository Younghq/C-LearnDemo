#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//声明函数
char* my_str(char* str, char* dest);

int main0004()
{
	char* str = "11abcd111122abcd333aaaadas";
	char ch[] = "abcd";//查找的子串
	char* resp = my_str(str,ch);
	int count = 0;
	while (resp != NULL)//只要resp找到了1个就进行循环
	{
		count++;
		//计数完后指针要修正偏移量
		resp += strlen(ch);
		//将进位了的地址作为参数继续下一次查找
		resp = my_str(resp,ch);
	}
	printf("%d", count);
	return 0;
}

//返回 字符地址
char* my_str(char* str, char* dest)
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