#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main0012()
{
	//Demo-ʹ�ÿ⺯�� strtok(str,0-��ȡ�ַ�)��ȡ
	char ch[] = "���,����!!";
	char * p = strtok(ch,",");	//��ȡ��������src��Ч
	printf("ch��ַ:%p\n", ch);
	printf("��ȡ֮��p��ַ:%p\n",p);	//res:��ַ��ͬ
	//Demo-�ظ���ȡɸѡ-���ü�ƫ������
	char ch2[] = "���,����!! ����һ�� �� ѧ ��";
	char* p1 = strtok(ch2, " ");
	printf("��ȡ֮��p1��:%s\n", p1);
	char* p2 = strtok(p1, " ");
	printf("��ȡ֮��p2��:%s\n", p2);
	char* p3 = strtok(p2, " ");
	printf("��ȡ֮��p3��:%s\n", p3);
	char* p4 = strtok(p3, " ");
	printf("��ȡ֮��p4��:%s\n", p4);
	return 0;
}


