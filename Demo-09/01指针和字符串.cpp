#include <stdio.h>
#include <stdlib.h>


//����-�ַ�������ĸ����
void Sort(char ** str,int length);

int main0001()
{
	/*
	ջ��:���ڴ�žֲ�����,����,�������ص�ַ  .esp ʼ��ָ��ջ��,ջ�е�����Խ��,esp��ֵԽС;
	����:���ڴ�Ŷ�̬����Ķ���,��̬����õ����ڴ����򸽴��з�����Ϣ,���������ͷź�ɾ��;
	������:ȫ��,��̬�ͳ����Ƿ������������е�,����������bss(δ��ʼ��������)�ͳ�ʼ��������;
	������:��ź�����Ķ����ƴ���;
	*/
	char ch[] = "Hello World";	//ջ���ַ���
	char * p = (char*)"Hello World";	//�������ַ���->�����ַ���
	//���������� ��ͬ�ĳ��������ظ����ٿռ�
	char ch1[] = "hello";	//�����Ǳ���,����ֱ���޸�
	//�ַ���������ַ�������޸�,������ͨ��ָ���޸ĵ�ַָ������һ��Ԫ�ص�ַ
	char* ch2[] = { "world ","hello ","yanghouqi " };
	Sort(ch2,3);
	printf(ch2[0]);
	printf(ch2[1]);
	printf(ch2[2]);
	return 0;
}

void Sort(char** str,int length)	//��ά�ַ�������ʹ�ö���ָ��
{
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length-1-i; j++)
		{
			if (str[j][0] > str[j + 1][0])
			{
				char* temp = str[j];	//����ָ����մ��ڵĵ�ַ
				str[j] = str[j+1];	//������ַ
				str[j + 1] = temp;
			}
		}
	}
}
