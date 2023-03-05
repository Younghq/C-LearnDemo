#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//声明-自定义strcmp()-对比字符串大小函数
int my_strcmp(const char* str1, const char* str2);
//声明-自定义strcmp()-究极优化版本
int my_strcmpMAX(const char* str1, const char* str2);
//声明-自定义strncmp()-字符串比较固定长度函数
int my_strncmp(const char *str1,const char *str2,size_t len);

int main0009()
{
	//Demo-演示string库函数 strcmp()
	char ch1[] = "1";
	char ch2[] = "1";	//\0后面的字符串也需要比较
	int value = strcmp(ch1,ch2);
	printf("ch1 和 ch2 :%s\n",value == 0 ? "相等":"不相等");//res:不相等

	//Demo-演示string库函数 strncmp() 比较指定长度的字符串
	int value2 = strncmp(ch1, ch2, 5);	//比较前五个字符
	printf("ch1 和 ch2 :%s\n", value2 == 0 ? "相等" : "不相等");//res:相等

	//Demo-自定义 strcmp()
	char ch3[] = "1123";
	char ch4[] = "1123";
	int value3 = my_strcmp(ch3, ch4);
	printf("%d\n", value3);//res:相等

	//Demo-自定义 strncmp()
	int value4 = my_strncmp(ch1,ch2,5);
	printf("%d\n", value4);//res:相等
	return 0;
}

//定义-自定义strcmp()对比字符串大小函数
int my_strcmp(const char* str1, const char* str2)
{
	//先判断当前值否!0,在进行循环过程
	while (*str1 == 0 &&(*(str1++) == *(str2++)));
	//若指针累加到了低位,代表字符串到底 完全相同
	if (*str1 == 0 && *str2 == 0) return 0;
	//三目返回值 左边大-1,右边大1
	return *str1 > *str2 ? 1 : -1;
}

//定义-自定义strcmp()-究极优化版本
int my_strcmpMAX(const char* str1, const char* str2)
{
	//!0 = 1; 即是true
	while (!*str1 && (*(str1++) == *(str2++)));
	if (!*str1 && !*str2) return 0;
	return *str1 > *str2 ? 1 : -1;
}

//定义-自定义strncmp()-字符串比较固定长度函数--也可以用循环实现
int my_strncmp(const char* str1, const char* str2, size_t len)
{
	while ((*(str1++) == *(str2++)) && !*str1);
	if (!*str1 && !*str2) return 0;
	return *str1 > *str2 ? 1 : -1;
}
