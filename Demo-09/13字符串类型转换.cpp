#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//Demo-ʹ��<stdlib.h>�⺯�� atoi()
	//����:���ַ���Ϊ"1000" ת����1000,ֻ�ܴ������ֵ��ַ���,ֻʶ��10��������
	char* str = "   -12-345a1";
	int n = atoi(str);//��һλ���Ժ��Կո�,�Ҵ������ַ����ſ���ת,������ո��ַ���'-'���
	printf("%d\n", n);
	long m = atoi(str);
	printf("%d\n", m);
	return EXIT_SUCCESS;
}
