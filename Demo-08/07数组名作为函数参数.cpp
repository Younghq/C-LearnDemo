#include <stdio.h>
#include <stdlib.h>

void my_strcat(char * ch1,char *ch2);	//����汾
void my_strcat2(char* ch1, char* ch2);	//ָ��汾
void my_strcat3(char* ch1, char* ch2);	//ָ����Ϊѭ�������汾
void remove_space(char *ch);
void remove_space2(char* ch);

int main0007() 
{
	char arr1[100] = "hello";	//�����С�ǳ���
	char arr2[] = "world\n";
	my_strcat3(arr1,arr2);
	printf(arr1);
	char ch[] = " �� ��   ��� ţ ��     !";
	remove_space2(ch);
	printf(ch);
	return 0;
}

//ʵ���ַ���ƴ��--����汾
void my_strcat(char* ch1, char* ch2)
{
	int i = 0,j=0;
	while (ch1[i]!=0)//�����һ���ַ������鳤��
	{
		i++;
	}
	while(ch2[j] != 0)
	{
		//�����ַ���
		ch1[i + j] = ch2[j];
		j++;
	}
}
//ʵ���ַ���ƴ��--ָ����� ��ѭ���汾
void my_strcat2(char* ch1, char* ch2)
{
	while (*ch2 != 0)
	{
		if (*ch1 == 0)
		{
			*ch1 = *ch2;
			ch2++;
		}
		ch1++;
	}
}
//ֱ����ѭ��������Ϊִ�����(���6�汾)
void my_strcat3(char* ch1, char* ch2)
{
	while (*ch1)ch1++;
	while (*ch1++ = *ch2++);
}

void remove_space(char* ch)	//ָ��汾
{
	char arr[100] = {0};	//���帨���ռ�
	char* temp = ch;	//�洢ԭ��ַ
	int i = 0,j = 0;
	while (*ch != 0)	//ֱ�Ӷ�ԭ��ַ���в���
	{
		if (*ch != 32)
		{
			arr[i] = *ch;
			i++;
		}
		ch++;
	}
	//���ǲ���
	while (*temp != 0)	//ch��ַ���ı�
	{
		*temp = *(arr+j);	//ʹ��temp���ch��ַ
		j++;
		temp++;
	}
	*temp = 0;
}
void remove_space2(char* ch) //ָ���Ż��汾
{
	char* ftemp = ch;	//����ָ��
	char* rtemp = ch;	//�洢ԭ��ַָ�뷽�㸲д
	while (*ftemp)
	{
		if (*ftemp != ' ')
		{
			*rtemp = *ftemp;
			rtemp++;	//ָ��ƫ��
		}
		ftemp++;
	}
	//��λ+0 ����Ϊ�ַ���
	*rtemp = 0;
}

