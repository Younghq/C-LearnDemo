#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//���� �ַ�����������
void my_strcpy(char * dest,char *ch);
int main0002()
{
	char ch[] = "hello world";
	char dest[100];
	my_strcpy(dest, ch);
	printf("ԭ����ch:%s\n", ch);
	printf("�滻��dest:%s\n",dest);
	return EXIT_SUCCESS;
}
//���� �ַ�����������
void my_strcpy(char* dest, char* ch)
{
	//ѭ������
	/*int i = 0;
	while (ch[i] != 0)
	{
		dest[i] = ch[i]; 
		i++;
	}
	dest[i] = 0;*/
	//����ָ�� �����ַ���
	while (*ch!=0) {
		*dest = *ch;
		ch++;
		dest++;
	}
	*dest = 0;
	//�����򵥰汾
	/*while (*dest++ = *ch++);*/
}
