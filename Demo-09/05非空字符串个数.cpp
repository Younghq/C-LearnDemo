#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��������
//���ַ����пո����
int get_space(char* ch);
//ͳ�������ַ������ִ���
void get_count(char * ch);

int main0005()
{
	//Demo-��ȡ�ո����
	char ch[] = "  hello   world  ";
	int space = get_space(ch);
	printf("%d\n",space);

	//Demo-ͳ���ַ�����ÿ��Сд�ַ����ֵĸ���
	char ch1[] = "aabdddcdefghijk";
	get_count(ch1);
	return 0;
}
//�����ַ����ո����
int get_space(char* ch)
{
	int count = 0;
	while (*ch)
	{
		if (*ch == ' ')
		{
			count++;
		}
		ch++;
	}
	return count;
}
//
void get_count(char* ch)
{
	//�ȶ��ַ���ָ����м���
	int len = 0;
	while (*ch != 0)
	{
		len++;
		ch++;
	}
	//����ƫ����
	ch -= len;
	int arr[26] = {0};//���26���ַ����ֵĴ���
	//����ÿ���ַ�
	for (size_t i = 0; i < len ; i++)
	{
		//ACill���ȥa��ֵ
		//������26��Ӣ����ĸ������,��Ϊ����ֱ���ۼ�
		arr[ch[i] - 'a']++;
	}
	//�������
	for (size_t i = 0; i < len; i++)
	{
		if (arr[i])
		{
			printf("��ĸ:%c ������ %d��\n",i+'a',arr[i]);
		}
	}
}
