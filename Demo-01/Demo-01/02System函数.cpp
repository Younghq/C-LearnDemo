#include <stdio.h> //printf
#include<string.h>
#include<stdlib.h>


int main2() {
	//system���� ������һ���ⲿ��Ӧ�ó��� �����·�� Ҫʹ��`\\`���� `/`
	int value = system("calc");
	printf("%d\n" + value); //%d ռλ�� �������
	return 0;
}