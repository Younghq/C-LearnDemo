#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>



int main131231231()
{
	//32λx86��С��4 64λx64��С��8
	printf("����ָ�����ڴ�ռ���ֽڴ�С:%d\n",sizeof(void*));
	int a = 10;
	void* p = &a;	//����ָ����Խ����������ͱ������ڴ��ַ,�������޸ı�����ֵ��ʱҪת����Ӧ����
	//* p = 100;	����:�Ƿ�Ѱַ,void����������
	*(int*)p = 100;
	printf("a��ֵ:%d", *(int*)p);
	return EXIT_SUCCESS;
}
