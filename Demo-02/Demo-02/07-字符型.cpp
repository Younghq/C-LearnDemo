
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main123aa()
{
	//字符型变量 只能存一个字符,存多个只会输出最后一位
	char cr = 'a';
	//打印字符型
	printf("%c\n", cr);
	printf("ASCll:%d\n",cr); //ASCLL:97
	printf("ASCll 大写转码:%c\n", cr-32); //ASCLL:97
	//sizeof 返回值是无符号 int 类型
	printf("字符型大小:%d\n", sizeof(cr)); //8bit
	printf("运行结束\a");
	return 0;
}
