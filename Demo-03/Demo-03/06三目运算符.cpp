#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//�궨�庯��
#define MAX(a,b) (a)>(b)?(a):(b)

int main12315415()
{
	int a = 10;
	int b = 20;
	/* һ���ж�����else������
	if (a < b) {
		printf("111");
	}
	else
		printf("222");
	*/
	//��Ŀ����� ���ʽ1?���ʽ2:���ʽ3
	//��Ϊ������ʽ2,Ϊ������ʽ3
	printf("���ֵ:%d\n",a>b ? a:b);
	//���ܵ�һ,����������С
	  
	//ʹ�ú궨�庯��
	printf("���ֵ:%d\n",MAX(a,b));
	
	return 0;
}
