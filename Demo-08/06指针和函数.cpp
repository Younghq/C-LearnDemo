#include <stdio.h>
#include <stdlib.h>

//���� ָ�뺯������
void swap(int* a,int *b);

int main0006()
{
	int a = 258;
	int b = 666;
	swap(&a,&b);//����ָ��
	printf("%d,%d",a,b);//��ӡ a:666 b:258
	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;	//��ʱ����
	*a = *b;
	*b = temp;
}
