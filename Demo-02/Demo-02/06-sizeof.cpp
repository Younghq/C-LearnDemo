#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main123455()
{
	//sizeof ���������������ڴ���ռ���ֽ�(byte)��С
	//��ʽ:sizeof(��������) sizeof(������) ������:sizeof ������

	//һ��BYTE(�ֽ�)��8��bit
	printf("����:%d\n", sizeof(int));//����:4�ֽ�=32bit
	printf("������:%d\n", sizeof(short));//������:2
	printf("������:%d\n", sizeof(long));//������:4
	printf("��������:%d\n", sizeof(long long));//��������:8
	return 0;
}
