#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main0010()
{
	//Demo-字符串格式化函数   
	//sprintf(char *str, const char *format, ...) 发送格式化输出到 str 所指向的字符串。
	char ch[100];
	sprintf_s(ch,"%d+%d=%d",1,2,3);
	printf("%s\n", ch);

	//Demo-字符串格式化读取函数
	char ch2[] = "hello world";
	int a, b, c;
	char str[100];
	//sscanf(ch2,"%s",str);
	printf("%s", str);
	return 0;
}
