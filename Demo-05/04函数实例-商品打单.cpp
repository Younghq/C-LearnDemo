#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


void putstarline();//������������
void putlist(char a, int b);//��ǿ������嵥
int space(const char str[],int width);

//�򵥰���
int main12312312312()	
{
	/*putstarline();
	printf("Dear SIRE!\n");
	printf("Pay $5\n");
	printf("Thank you for your patronage\n");
	putstarline();*/
	int width = 30;
	putlist('*',width);
	putchar('\n');
	putlist(' ', space("Dear SIRE!", width));	//����space��������ո�
	printf("Dear SIRE!\n");
	putlist(' ', space("Pay $5", width));
	printf("Pay $5\n");
	putlist(' ', (width - strlen("Thank you for your patronage")) / 2);
	printf("Thank you for your patronage\n");
	putlist('*', width);
	return EXIT_SUCCESS;
}

void putstarline(void)
{
	for (size_t i = 0; i < 20; i++)
	{
		putchar('*');
	}
	putchar('\n');
}

void putlist(char a,int b)	//aΪ��ӡ���ַ�,bΪ��ӡ�ĸ���
{
	//ʹ���־���,��ȡ������һ���ȥ��ӡ���ַ�
	for (size_t i = 0; i < b; i++)
	{
		putchar(a);
	}
}

int space(const char str[],int width)
{
	int spaces = 0;
	spaces = (width - strlen(str)) / 2;
	return spaces;
}


