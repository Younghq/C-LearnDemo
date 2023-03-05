#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//声明-自定义strchr()-在字符串s中查找c出现的位置
char* my_strchr(char * str1,int c);

int main0011()
{
	//Demo-查找字符串中某字符的位置 strchr()
	char ch[] = "hello world";
	char c = '1';
	char c2 = 'o';
	char* p = strchr(ch,c);
	char* p2 = strchr(ch, c2);
	printf("%s\n", p);//res:null 没找到就是空
	printf("%s\n", p2);//res:ello world

	//Demo-自定义strchr()
	char ch2[] = "hello world";
	char c3 = 'o';
	char* p3 = my_strchr(ch2, c3);
	printf("%s\n",p3);//res:ello world
	return 0;
}

char* my_strchr(char* str1, int c)
{
	while (*(str1+=1) != c && *str1 !=0)
	if (*str1 == 0)return NULL;
	return str1;
}
