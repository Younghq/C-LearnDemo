#include <stdio.h>
#include <stdlib.h>


//�������Ժ���
char* my_strchr(char *str,char ch);	//����汾�����ַ�
char* my_strchr2(char* str, char ch);	//ָ��汾�����ַ�
char* my_str(char* str, char* findstr,int len);	//�����Ӵ�
char* my_str2(char* str, char* dest);

int main()
{
	char str[] = "hello worfuckldadad";
	char* p = str;
	char*res = my_strchr2(p, '2');
	char find[] = "fuck";


	char* res2 = my_str(str, find,3);
	printf("%s", res2);
}

//���鷽ʽ
char* my_strchr(char* str, char ch)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return &str[i];
		i++;
	}
	return NULL;
}

char* my_strchr2(char* str, char ch)
{
	while (*str != ch)
	{
		str++;
		if (*str == 0)
			return NULL;
	}
	return str;
}

char* my_str(char* str, char* findstr,int len) //�����Ǵ��,������
{
	int i = 0;
	while (*str != 0)
	{
		if (*str == *findstr)
		{
			findstr++;
			i++;
		}
		else
		{
			i = 0;
			findstr - i;
		}
		if (i == len)
		{
			return str;
		}
		str++;
	}
	return NULL;
}

char* my_str2(char* str, char* dest)
{
	char* fsrc = str;	//��¼Դ�ַ�����ַ
	char* rsrc = str;	//�Ӵ�������ַ
	char* tdest = dest;	//��¼�Ӵ��׵�ַ
	while (*rsrc)
	{
		rsrc = fsrc; //��ַ
		while (*fsrc == *tdest && *fsrc != 0) //����Դֵ == �Ӵ�Դֵ
		{
			fsrc++;
			tdest++;
		}
		if (*tdest == 0)
		{
			return rsrc;
		}
		//�ع�
		tdest = dest;
		fsrc = rsrc;
		fsrc++;
	}
}
