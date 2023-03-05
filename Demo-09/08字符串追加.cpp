#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//声明-字符串追加函数 实现<string.h> 中的 strcat()函数;
void my_strcat(char * dest,const char* src);
//声明-字符串追加子串指定长度 实现<string.h> 中的 strncat()函数;
void my_strncat(char* dest, const char* src,int len);

int main0008()
{
	//Demo-字符串追加函数
	char dest[100] = "hello";	//被追加的字符串
	char src[] = "world";	//追加字符串
	my_strcat(dest,src);
	printf("%s\n", dest);

	//Demo-字符串指定追加长度的子串
	char dest2[100] = "你好呀!";	//被追加的字符串
	char src2[] = "世界123";	//追加字符串
	my_strncat(dest2, src2,3);
	printf("%s\n", dest2);
	return 0;
}

//定义字符串追加函数
void my_strcat(char* dest, const char* src)
{
	//找到dest\0位置
	while (*dest)dest++;
	//从dest的末尾开始追加*src
	while (*dest++ = *src++);
	*dest = 0;
}

void my_strncat(char* dest, const char* src, int len)
{
	//找到dest\0位置
	while (*dest)dest++;
	//从dest的末尾开始追加*src
	while ((*(dest++) = *(src++)) && len--);
	*dest = 0;
}
