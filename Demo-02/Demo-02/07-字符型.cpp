
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main123aa()
{
	//�ַ��ͱ��� ֻ�ܴ�һ���ַ�,����ֻ��������һλ
	char cr = 'a';
	//��ӡ�ַ���
	printf("%c\n", cr);
	printf("ASCll:%d\n",cr); //ASCLL:97
	printf("ASCll ��дת��:%c\n", cr-32); //ASCLL:97
	//sizeof ����ֵ���޷��� int ����
	printf("�ַ��ʹ�С:%d\n", sizeof(cr)); //8bit
	printf("���н���\a");
	return 0;
}
