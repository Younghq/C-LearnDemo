#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main123123121()
{
	int a = 0xaabbccdd;	//16���� 10 = 0xaabbccdd
	//a = 100;
	printf("%p\n", &a);
	getchar();
	return EXIT_SUCCESS;
}

int main1231231231(void)
{
	//����ָ������洢������ַ
	int a = 10;//ָ����������
	//ָ������ -> ��������*
	int* p;	
	//��a�ĵ�ַ��ֵ��p
	p = &a;
	*p = 100;
	printf("%p\n",&a);
	printf("%p\n",p);
	return EXIT_SUCCESS;
}

//ʹ�õ�ַ�����&ȡ��ַ  ʹ�ü�������*�õ���ַ�ϵ�����
int main12411515()
{
	int x = 10;
	int* a = &x;	//����һ��ָ����� ָ��x�ĵ�ַ
	int b = *a;		//����һ�����α���b �ü�������ȡ��aָ��ĵ�ַ�ϵ� ֵ����    
	printf("%d", b);
	//printf("%d", sizeof(*a));
	return EXIT_SUCCESS;
}
//ָ���С:
//ʹ��sizeof()����ָ���С,�õ�������:4��8
// sizeof()�����ָ�����ָ��洢��ַ�Ĵ�С
// 32λƽ̨,����ָ���ַ����32λ(4�ֽ�)
// 64λƽ̨,����ָ���ַ����64λ(8�ֽ�)

int main124121312()
{
	char ch = 'a';
	//int* p = (int*)&ch; �ڶ���ָ��һ��Ҫ�ͱ�����Ӧ��,4���ֽڵ�int���ʹ洢1���ֽڵ�char��ַ,������ʼ����4���ֽ�
	char * p = &ch;
	*p = 99;
	printf("��ȡ��ַ�ϵ�ֵ:%d\n",*p);
	printf("����97λ99���ֵ:%c\n", ch);
	return EXIT_SUCCESS;
}