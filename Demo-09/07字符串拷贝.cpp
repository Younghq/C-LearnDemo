#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//����-�����ַ������� (��������,str)    <string.h> strcpy(��������,str)
void my_strcpy(const char* src, char* dest);
//����-����ָ�����ȵ��Ӵ�
void my_strncpy(const char* src, char* dest, size_t n);


int main0007()
{
	//Demo-�ַ����������� 
	char ch[] = "���ǲ����ַ���";
	char str[100] = {0};
	my_strcpy(ch, str);
	printf("%s\n",str);

	//Demo-�ַ���ָ�����ȿ���
	char ch2[] = "����̫��,ʵ��̫��";
	char str2[100] = {'0'};
	my_strncpy(ch2, str2,2);
	printf("%s\n", str2);
	return 0;
}

//����-�����ַ�������
void my_strcpy(const char* src,char* dest)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return;
}
//����-����ָ�����ȵ��ַ���
void my_strncpy(const char* src,char* dest, size_t n)
{
	//*dest=*src �������Ϊ�� �� n--Ϊ���ִ�к���
	while (( *dest++ = *src++) && n--);
}
 