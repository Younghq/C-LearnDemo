#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	//ʹ��char����Ϊchar�պ���8λҲ����1�ֽ� ��������ԭ�� 0000 0000
	char ch = 10;
	printf("%c\n", ch);//ʹ��%c��ӡ�ַ������޷���ӡ��,��Ϊ10�ǿ����ַ�
	printf("%d\n", ch);
	printf("%p\n", &ch);
	return 0;
}
