#include <stdio.h>
#include <stdlib.h>

//����-���ַ������Ⱥ���
int strlen(const char * str);


int main0002()
{
	char* str = "12345";
	printf("%d",strlen(str));
	return 0;
}
//const char* str��ֵ:char* const str������ַ
//һ������ָ�����ͨ������ָ���޸�
//��������,�����ָ���޸ļ���
int strlen(const char* str)
{
	//�����ָ��
	if (str == NULL)
		return 0;
	const char* temp = str;
	while (*str)str++;
	return str - temp ;
}