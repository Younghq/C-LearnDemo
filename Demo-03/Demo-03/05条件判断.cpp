
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main123151512()
{
	int score;
	printf("----��ӭ����־Ըϵͳ----\n��������߿��ĳɼ�:\n");
	scanf("%d", &score);//scanf ��ֹʹ��\n &Ϊָ��
	if (score < 0 ) 
	{
		printf("�ɼ�����Ϊ����!");
	}
	else if (score == 0) 
	{
		printf("�ɼ���Ч!");
	}
	else if (score > 750)
	{
		printf("�ɼ���Ч!");
	}
	else if (score <=200)
	{
		printf("�޿���ѡ���ѧУ");
	}
	else if(score <= 450)
	{
		printf("�����ר��¼ȡ���ʽϴ�");
	}
	else if (score <=530) 
	{
		printf("������ձ�¼ȡ���ʽϴ�");
	}
	else if (score <= 600)
	{
		printf("���Գ��һ��˫��һ����211");
	}
	else if(score <= 650){
		printf("���Գ��һ��˫һ����ѧ");
	}
	else {
		printf("���Գ��һ���山����");
	}
	return 0;
}
