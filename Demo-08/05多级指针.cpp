#include <stdio.h>
#include <stdlib.h>
//�༶ָ��
int main0005()
{
	int a = 10;
	int b = 20;
	int* p = &a;
	int** pp = &p;
	p = &b;	//��Ӹı��ַָ�� &b
	**pp = 100;	//�ı����ָ��pp ָ���&b ��ַ�ϵ�ֵ
	printf("%d", **pp);
	//�����ж༶ָ��,�����ܶ༶&&&
	return 0;
}