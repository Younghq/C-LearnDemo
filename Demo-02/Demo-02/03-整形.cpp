#include<stdio.h>

int main1234()
{
	//����������(Ĭ�Ͽ�ʡ��):
	signed int a = -10;//log:-10
	//�޷���(����Ϊ����,�������� 4294967286): 
	unsigned int b = 10;
	//%u ��ʾ���һ���޷���ʮ������������
	printf("%u\n",b);
	return 0;
}
//����ڶ������� ��������
int main112312(void)
{
	//����
	//������:0-1,�˽���:0-7,ʮ������:0-9 10-15(a-f A-F)
	int a = 10;
	printf("%d\n", a);
	//ռλ�� %x ���һ��ʮ����������
	printf("%x\n", a);
	printf("%X\n", a);
	//ռλ�� %o ���һ���˽�������
	printf("%o\n", a);
	/*
	log:10,a,A,12
	*/
	//����˽������� ��0��ͷ
	int c = 0123;
	//����ʮ���������� ��0x��ͷ
	int d = 0xabc;
	printf("%o\n", c);
	printf("%x\n", d);
	return 0;
}
