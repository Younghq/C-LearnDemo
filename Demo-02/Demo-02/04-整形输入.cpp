#include<stdio.h>
#pragma warning(disable:4996)
int main11234() {
	printf("������һ������\n");
	int a;
	//ͨ���������븳ֵ
	//& ����� ��ʾȡ��ַ�����
	scanf("%d",&a);
	//
	printf("%d\n", a);
	return 0;
}
/*
** Scanf ��ȫ���� VS�� C4996 ����
����΢����VS���Ѿ����ڽ���ʹ��C�Ĵ�ͳ�⺯�� scanf,strcpy,printf��,
����ֱ��ʹ����Щ�⺯������ʾ C4996 ���� -����Ŀ������ַ���ִ���������������
����취1:
	ʹ�� �궨�� Լ������ :
	#define _CRT_SECURE_NO_WARNINGS(��÷ŵ�һ��)
����취2:
	#pragma warning(disable:4996)
*/