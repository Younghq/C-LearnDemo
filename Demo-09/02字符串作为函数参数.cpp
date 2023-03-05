#include <stdio.h>
#include <stdlib.h>

//声明-求字符串长度函数
int strlen(const char * str);


int main0002()
{
	char* str = "12345";
	printf("%d",strlen(str));
	return 0;
}
//const char* str锁值:char* const str锁定地址
//一级常量指针可以通过二级指针修改
//二级若锁,则递增指针修改即可
int strlen(const char* str)
{
	//提防空指针
	if (str == NULL)
		return 0;
	const char* temp = str;
	while (*str)str++;
	return str - temp ;
}