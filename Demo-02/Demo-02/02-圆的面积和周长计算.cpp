#include<stdio.h>
#define PI 3.14
//�궨�峣��
//C����:#define
//C++ constexpr auto �� C++11 �������Ĺؼ��֣�����������һ�����������ǳ������ʽ�����һ����������������Ϊ constexpr����ô����ֵ�򷵻�ֵ�ڱ���ʱ�Ϳ���ȷ��������Ҫ������ʱ���㡣����ؼ��ֿ���ȷ���������Ż��������ʽ��������߳��������Ч�ʡ�
//constexpr auto pi = 3.1415926;

int main2()
{
	//Բ����� s = pi * r * r
	//Բ�ܳ�   l = 2 * pi * 
	float radius = 5;
	float result1 = PI * radius * radius;
	float result2 = 2 * PI * radius;
	//������ռλ�� %f  %.2f ������С������λ
	printf("Բ���:%.2f\n", result1);//��������ֻ��c���ԲŻ�
	printf("Բ�ܳ�:%.2f\n", result2);
	return 0;
}