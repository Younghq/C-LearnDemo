#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main0010()
{
	//Demo-�ַ�����ʽ������   
	//sprintf(char *str, const char *format, ...) ���͸�ʽ������� str ��ָ����ַ�����
	char ch[100];
	sprintf_s(ch,"%d+%d=%d",1,2,3);
	printf("%s\n", ch);

	//Demo-�ַ�����ʽ����ȡ����
	char ch2[] = "hello world";
	int a, b, c;
	char str[100];
	//sscanf(ch2,"%s",str);
	printf("%s", str);
	return 0;
}
