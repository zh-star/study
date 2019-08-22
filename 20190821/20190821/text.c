#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

/*1.ʵ��strcpy,�ַ�������*/
char* Strcpy(char* dest, const char* src) {	
	if (src == NULL || dest ==NULL) {   //��͵Ĵ���ʽ
		return dest;
	}
	//assert(src != NULL || dest != NULL);//assert ��д�Ϸ����ݣ����������ϳ������
	int i = 0;
	for (i = 0; src[i] != '\0'; ++i) {
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return dest;
}
#if 0
int main() {
	char str1[] = "abcdef";
	char str2[] = "cccccc";
	Strcpy(str1, str2);
	printf("%s\n", str1);
	return 0;
}
#endif
/*2.ʵ��strcat :�ַ���ƴ��*/
char* 	strcat(char* dest, const char* src)
{
	if (dest == NULL || src == NULL)
	{
		return dest;
	}
	char* p = dest;
	while (*p != '\0')
	{
		++p;
	}//ѭ��������pָ��\0��
	//Strcpy(p,src);
	while (*src != '\0')
	{
		*p = *src;
		++p;
		++src;
	}
	return dest;

}
#if 0
int main() 
{
	char str1[20] = "abcde";
	char str2[] = "fhij";
	strcat(str1,str2);
	printf("%s\n", str1);
	return 0;
}
#endif
/*3.ʵ��strstr :�����ַ���*/
const char* Strstr(const char* str1, const char* str2)
{
	if (str1== NULL || str2 == NULL)
	{
		return NULL;
	}	
	if (*str2 == '\0')
	{
		return NULL;
	}
	const char* black_ptr = str1;
	while (*black_ptr != '\0')
	{
		const char* red_ptr = black_ptr;
		const char* sub_ptr = str2;
		while ((*red_ptr != '\0')&&(*sub_ptr != '\0' )&& (*red_ptr == *sub_ptr))
		{
			++red_ptr;
			++sub_ptr;
		}
		if (*sub_ptr == '\0')
		{//�ҵ����ַ���
			return black_ptr;
		}
		else//  *red_ptr == '\0'�� *red_ptr != *sub_ptr���������
		{
			++black_ptr;
		}		
	}
	return NULL;
}
#if 0
int main()
{
	const char str1[12] = "hello world";
	const char str2[] = "world";
	const char* ret=Strstr(str1, str2);
	if (ret == NULL)
	{
		printf("û���ҵ�\n");
	}
	else
	{
		printf("�ҵ���\n");
	}
	return 0;
}
#endif
/*4.ʵ��strchr(s,c):�����ַ���s���״γ����ַ�c��λ�á�*/
char* Strchr(const char* str1, int  c)
{
	if (str1 != NULL || c != 0)
	{
		return NULL;
	}
	 const char* p = str1;
	while (*p != '\0')
	{
		if (*p == c)
		{
			return (char *)p;
		}
		++p;
	}
	return NULL;
}
#if 0
int main()
{
	char str1[] = "abcdecde";
	int  c = 'f';
	char* ret=strchr(str1, c);
	if (ret == NULL)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("%d\n", *ret);//-&str1+1);
	}
	return 0;
}
#endif
/*ʵ��strcmp:*/