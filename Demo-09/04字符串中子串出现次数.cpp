#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//��������
char* my_str(char* str, char* dest);

int main0004()
{
	char* str = "11abcd111122abcd333aaaadas";
	char ch[] = "abcd";//���ҵ��Ӵ�
	char* resp = my_str(str,ch);
	int count = 0;
	while (resp != NULL)//ֻҪresp�ҵ���1���ͽ���ѭ��
	{
		count++;
		//�������ָ��Ҫ����ƫ����
		resp += strlen(ch);
		//����λ�˵ĵ�ַ��Ϊ����������һ�β���
		resp = my_str(resp,ch);
	}
	printf("%d", count);
	return 0;
}

//���� �ַ���ַ
char* my_str(char* str, char* dest)
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