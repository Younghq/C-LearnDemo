#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include <windows.h> //winͷ�ļ�

//ģ�����ʱ��
int main12451512()
{
	
	char str[] = "";
	for (int i = 0; i <= 24; i++)
	{
		for (int j = 0; j <= 60; j++)
		{
			for (int k = 0; k <= 60; k++) 
			{
				//����
				Sleep(1000);
				//����
				system("cls");
				//02����˼����������������������λ�������0����
				printf("%02d:%02d:%02d\n", i, j,k);
			}
			
		}
	}
	return EXIT_SUCCESS;
}
//99�˷���
int main15412512412()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-4d",j,i,i*j);
			
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//���100-200֮�����е�����
int main1412()
{
	//����:�����ֳ�������һ������1����Ȼ��������1����������
	//���ܱ�������Ȼ������������������;�����Ϊ������
	int i, j;               //����ѭ������
	for (i = 100; i <= 200; i++)              //�����100-200֮���ѭ������
	{
		for (j = 2; j < i; j++)          //�ж�������(2)---(i-1)֮���ܷ�i����
		{
			if (i % j == 0) break;        //�������������ѭ������������
		}
		if (j >= i)
		{
			//���j>=i��Ϊ�����������
			printf("%d\t", i);     //�ñ�����ʽ������
		}
	}
	return EXIT_SUCCESS;
}

//��ӡ������
int main1241231()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//����ֱ��������
int main15121231()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//����ֱ��������
int main15123131233()
{
	for (int i = 1; i <= 5; i++)
	{
		//���ѭ���ǵ�������ո�
		for(int j = 5 ; i<=j ;j--)
		{
			printf(" ");
		}
		//����ո�������ӡ�Ǻ�
		for (int k = 1; i >= k; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//��ӡ������
//       *
//	    ***
//	   *****
//    *******
//	 *********
//  ���취
int main1512412312()
{
	for (int i = 1; i <= 5; i++)
	{
		//���ѭ���ǵ�������ո�
		for (int j = 5; i <= j; j--)
		{
			printf(" ");
		}
		//����ո�������ӡ�Ǻ�
		for (int k = 1; i >= k; k++)
		{
			printf("*");
		}
		for (int h = 2; h <= i; h++) 
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
// �õ�Ľⷨ
int main12412123()
{
	for (int i = 1; i <= 5; i++)
	{
		//���ѭ���ǵ�������ո�
		for (int j = 5; i <= j; j--)
		{
			printf(" ");
		}
		//�Ա��������ֱ��������,����ÿ�ж��� i*2-1 ��
		for (int k = 1; k <= i*2-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//����ֱ��������
int main15123123()
{
	for (int i = 5; i >= 0; i--)
	{
		for (int j = 1; j <=  i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//����ֱ��������
int main1412341451()
{
	for (int i = 1; i <= 5 ; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int k = 5; k >= i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
//����
int main()
{
	//һ��������������һ�������������� 2i-1
	for (int i = 1; i <= 5; i++)
	{
		//���������ǿո�
		for (int j = 5; j >= i;j--)
		{
			printf(" ");
		}
		//�������ǿո�
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 5; i >= 1; i--)
	{
		//���������ǿո�
		for (int j = 6; j >= i; j--)
		{
			printf(" ");
		}
		//�������ǿո�
		for (int k = 1; k <= 2 * i-3; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}