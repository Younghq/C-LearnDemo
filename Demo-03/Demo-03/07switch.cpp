#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main11512412()
{
	//switch ����Ϊ:����
	int score;
	scanf("%d", &score);
	//switch �ŵ�Ч�ʱ� if else Ҫ��,ȱ��ֻ���жϵ�һ����
	switch (score / 10)
	{
		case 10: {
			printf("����!");
			break;
		}
		case 9: {
			printf("����!");
			break;
		}
		case 8: {
			printf("����!");
			break;

		case 7: {
			printf("����!");
			break;
		}
		case 6: {
			printf("����!");
			break;
		}
		case 5: {
			//��֤
			printf("������!%d", score / 10);
			break;
		}
		default: {
			//��,֮��������
			printf("�ɼ��ϲ�");
			break;
		}
	}
	return 0;
	}
}