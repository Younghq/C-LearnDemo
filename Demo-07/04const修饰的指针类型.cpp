#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//ָ���޸ĳ���ֵ
int main123414()
{
	//����
	const int a = 100;
	//a = 100; ���ʽ�����ǿ��޸ĵ���ֵ:����

	//����ָ�����޸ĳ���:ջ��	  �궨��ĳ������޷��޸ĵ�:��������
	int* p = (int*) & a;	//�������ת����ַ ����
	*p = 100;
	printf("%d",*p);
	return EXIT_SUCCESS;
}
//1.const����ָ������ 
int main1121(void)
{
	int a = 10;
	int b = 20;
	//����ָ������:ָ��������ǳ���,���ܱ��޸�,������ָ���ĵ�ַ���޸�
	const int* p = &a;	
	p = &b;		//
	printf("%d\n", *p);
	return EXIT_SUCCESS;
}
//2.const����ָ�����
int main1129(void)
{
	int a = 10;
	int b = 20;
	//����ָ�����:ָ�뱾���ǳ���,�����޸�,����ָ��ָ������ݿ��Ա��޸�
	int* const p = &a;
	*p = 100;
	printf("%d\n", a);
	return EXIT_SUCCESS;
}//�ܵ���˵��const����ָ��������Ҫ���ڷ�ָֹ����ָ������ݱ��޸ģ���const����ָ�������Ҫ���ڷ�ָֹ�뱾���޸ġ�
//3.������ָ��Ҳ���α���
int main12314111112(void)
{
	int a = 10;
	int b = 20;
	//const ����ָ������ ����ָ�����
	const int* const p = &a;
	//p = &b;  ��������޸ĵ���ֵ
	//*p = &b; ��������޸ĵ���ֵ

	//&��ȡ��ַ��������ά�ȵ�
	//*��ȡֵ�����ǽ�ά�ȵ�


	//����ָ���޸�
	printf("%d\n",*p);
	int** pp = (int**) &p;	
	//**p = &b;
	return EXIT_SUCCESS;
}