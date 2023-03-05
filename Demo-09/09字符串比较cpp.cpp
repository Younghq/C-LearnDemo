#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//����-�Զ���strcmp()-�Ա��ַ�����С����
int my_strcmp(const char* str1, const char* str2);
//����-�Զ���strcmp()-�����Ż��汾
int my_strcmpMAX(const char* str1, const char* str2);
//����-�Զ���strncmp()-�ַ����ȽϹ̶����Ⱥ���
int my_strncmp(const char *str1,const char *str2,size_t len);

int main0009()
{
	//Demo-��ʾstring�⺯�� strcmp()
	char ch1[] = "1";
	char ch2[] = "1";	//\0������ַ���Ҳ��Ҫ�Ƚ�
	int value = strcmp(ch1,ch2);
	printf("ch1 �� ch2 :%s\n",value == 0 ? "���":"�����");//res:�����

	//Demo-��ʾstring�⺯�� strncmp() �Ƚ�ָ�����ȵ��ַ���
	int value2 = strncmp(ch1, ch2, 5);	//�Ƚ�ǰ����ַ�
	printf("ch1 �� ch2 :%s\n", value2 == 0 ? "���" : "�����");//res:���

	//Demo-�Զ��� strcmp()
	char ch3[] = "1123";
	char ch4[] = "1123";
	int value3 = my_strcmp(ch3, ch4);
	printf("%d\n", value3);//res:���

	//Demo-�Զ��� strncmp()
	int value4 = my_strncmp(ch1,ch2,5);
	printf("%d\n", value4);//res:���
	return 0;
}

//����-�Զ���strcmp()�Ա��ַ�����С����
int my_strcmp(const char* str1, const char* str2)
{
	//���жϵ�ǰֵ��!0,�ڽ���ѭ������
	while (*str1 == 0 &&(*(str1++) == *(str2++)));
	//��ָ���ۼӵ��˵�λ,�����ַ������� ��ȫ��ͬ
	if (*str1 == 0 && *str2 == 0) return 0;
	//��Ŀ����ֵ ��ߴ�-1,�ұߴ�1
	return *str1 > *str2 ? 1 : -1;
}

//����-�Զ���strcmp()-�����Ż��汾
int my_strcmpMAX(const char* str1, const char* str2)
{
	//!0 = 1; ����true
	while (!*str1 && (*(str1++) == *(str2++)));
	if (!*str1 && !*str2) return 0;
	return *str1 > *str2 ? 1 : -1;
}

//����-�Զ���strncmp()-�ַ����ȽϹ̶����Ⱥ���--Ҳ������ѭ��ʵ��
int my_strncmp(const char* str1, const char* str2, size_t len)
{
	while ((*(str1++) == *(str2++)) && !*str1);
	if (!*str1 && !*str2) return 0;
	return *str1 > *str2 ? 1 : -1;
}
