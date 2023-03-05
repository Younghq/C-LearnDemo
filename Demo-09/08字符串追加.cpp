#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����-�ַ���׷�Ӻ��� ʵ��<string.h> �е� strcat()����;
void my_strcat(char * dest,const char* src);
//����-�ַ���׷���Ӵ�ָ������ ʵ��<string.h> �е� strncat()����;
void my_strncat(char* dest, const char* src,int len);

int main0008()
{
	//Demo-�ַ���׷�Ӻ���
	char dest[100] = "hello";	//��׷�ӵ��ַ���
	char src[] = "world";	//׷���ַ���
	my_strcat(dest,src);
	printf("%s\n", dest);

	//Demo-�ַ���ָ��׷�ӳ��ȵ��Ӵ�
	char dest2[100] = "���ѽ!";	//��׷�ӵ��ַ���
	char src2[] = "����123";	//׷���ַ���
	my_strncat(dest2, src2,3);
	printf("%s\n", dest2);
	return 0;
}

//�����ַ���׷�Ӻ���
void my_strcat(char* dest, const char* src)
{
	//�ҵ�dest\0λ��
	while (*dest)dest++;
	//��dest��ĩβ��ʼ׷��*src
	while (*dest++ = *src++);
	*dest = 0;
}

void my_strncat(char* dest, const char* src, int len)
{
	//�ҵ�dest\0λ��
	while (*dest)dest++;
	//��dest��ĩβ��ʼ׷��*src
	while ((*(dest++) = *(src++)) && len--);
	*dest = 0;
}
