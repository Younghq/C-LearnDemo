#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main15124124()
{
	int i = 0;
	//������ʽ
	do 
	{
		printf("%d\n",i);
		i++;
	} while (i<=10);
	//��ͬ��while��ʱ,������ִ��ѭ����,��ȥ�ж������Ƿ�Ϊ��
	return EXIT_SUCCESS;
}
//��1000���ڵ� ˮ�ɻ���
int main12314124(){
	int i = 100;
	//������ʽ
	do
	{
		//ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵������������磺1^3 + 5^3+ 3^3 = 153

		//�õ�������İ�λ
		int hundred = i / 100 % 10;
		//ʮλ
		int ten = i / 10 % 10;
		//��λ
		int bits = i / 1 % 10;
		if (pow(hundred, 3) + pow(ten, 3) + pow(bits, 3) == i) {
			printf("%d\n", i);
		}
		i++;
	} while (i < 1000);
	//��ͬ��while��ʱ,������ִ��ѭ����,��ȥ�ж������Ƿ�Ϊ��
	return EXIT_SUCCESS;
}

int main1231241() {
	int i = 356;
	int hundred = i / 100 % 10;
	//(i % 100)/10;
	int ten = i / 10 % 10;
	int bits = i / 1 % 10 ;
	//pow(hundred, 3) + pow(ten, 3) + pow(bits, 3)
	int a = pow(hundred, 3) + pow(ten, 3) + pow(bits, 3);
	printf("%d\n", hundred);
	printf("%d\n", ten);
	printf("%d\n", bits);
	printf("%d\n", a);
	return EXIT_SUCCESS;
}