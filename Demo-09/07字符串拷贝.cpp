#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//声明-拷贝字符串函数 (待拷贝串,str)    <string.h> strcpy(待拷贝串,str)
void my_strcpy(const char* src, char* dest);
//声明-拷贝指定长度的子串
void my_strncpy(const char* src, char* dest, size_t n);


int main0007()
{
	//Demo-字符串拷贝函数 
	char ch[] = "我是测试字符串";
	char str[100] = {0};
	my_strcpy(ch, str);
	printf("%s\n",str);

	//Demo-字符串指定长度拷贝
	char ch2[] = "姬霓太美,实在太美";
	char str2[100] = {'0'};
	my_strncpy(ch2, str2,2);
	printf("%s\n", str2);
	return 0;
}

//定义-拷贝字符串函数
void my_strcpy(const char* src,char* dest)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return;
}
//定义-拷贝指定长度的字符串
void my_strncpy(const char* src,char* dest, size_t n)
{
	//*dest=*src 这个过程为真 且 n--为真就执行函数
	while (( *dest++ = *src++) && n--);
}
 