#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����-�Զ���strchr()-���ַ���s�в���c���ֵ�λ��
char* my_strchr(char * str1,int c);

int main0011()
{
	//Demo-�����ַ�����ĳ�ַ���λ�� strchr()
	char ch[] = "hello world";
	char c = '1';
	char c2 = 'o';
	char* p = strchr(ch,c);
	char* p2 = strchr(ch, c2);
	printf("%s\n", p);//res:null û�ҵ����ǿ�
	printf("%s\n", p2);//res:ello world

	//Demo-�Զ���strchr()
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
