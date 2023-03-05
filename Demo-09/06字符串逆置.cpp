#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��������
//�����ַ������ú���
void inverse(char * ch);
void inversePoint(char* ch);
//���������ַ����жϺ���
int symm(char *ch);


int main0006()
{
	//Demo-�ַ�������-����汾
	char str[] = "123456";
	inverse(str);
	printf("%s\n",str);    //res:654321
	//Demo-�ַ�������-ָ��汾
	char str2[] = "abcdefg";
	inverse(str2);
	printf("%s\n", str2);
	//Demo-�����ַ����ж�
	char str3[] = "abcba";
	char str4[] = "asdasd";
	int res = symm(str3);
	int res2 = symm(str4);
	printf("%s�ǻ���?:%d\n",str3, res);
	printf("%s�ǻ���?:%d\n", str4, res2);
	return 0;
}

//����-�ַ�������
void inverse(char* ch)
{
	int i = 0;
	int j = strlen(ch)-1;
	while (i < j)
	{
		//ÿ��ѭ����ȡ��ǰ����
		char temp = ch[i];
		//ָ��j
		ch[i] = ch[j];
		ch[j] = temp;
		i++;
		j--;
	}
	return;
}

//ָ��-�ַ�������
void inversePoint(char* ch)
{
	char* start = ch;	//��ʼλ��
	char* terminus = ch+strlen(ch)-1;	//�յ�λ��
	//ѭ��
	while(*start < *terminus)//��ʼλ���ھ��˳�ѭ��
	{
		//ȡ��ʼλ�õ�ֵ
		char temp = *start;
		//�û�-����λָ��ĩλ
		*start = *terminus;
		*terminus = temp;
		//��λ��λ,ĩλ��λ
		start++;
		terminus--;
	}
}

//�����ַ����жϺ���
int symm(char* ch)
{
	char* start = ch;	//��ʼλ��
	char* terminus = ch + strlen(ch) - 1;	//�յ�λ��

	while (*start < *terminus)
	{
		if (*start != *terminus)//����λ��ĩλ��ͬ
		{
			return -1;	//����-1 ��ʾ�ǻ����ַ���
		}
		start++;
		terminus--;
	}
	return 1;
}
