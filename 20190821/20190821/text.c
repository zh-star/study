#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#if 0
/*1.实现strcpy,字符串拷贝*/
char* Strcpy(char* dest, const char* src) {	
	if (src == NULL || dest ==NULL) {   //合法性校验，柔和的处理方式
		return dest;
	}
	//assert(src != NULL || dest != NULL);//assert 中写合法内容，条件不符合程序崩溃
	int i = 0;
	for (i = 0; src[i] != '\0'; ++i) {
		dest[i] = src[i];//将src拷贝给dest
	}
	dest[i] = src[i];//将'\0'也要拷贝
	return dest;
}
int main() {
	char str1[] = "abcdef";
	char str2[] = "cccccc";
	Strcpy(str1, str2);
	printf("%s\n", str1);
	return 0;
}

#endif
#if 0
/*2.实现strcat :字符串拼接*/
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
	}//循环结束。p指向‘\0’
	//Strcpy(p,src);
	while (*src != '\0')
	{
		*p = *src;
		++p;
		++src;
	}
	return dest;
}
int main() 
{
	char str1[20] = "abcde";
	char str2[] = "fhij";
	strcat(str1,str2);
	printf("%s\n", str1);
	return 0;
}

#endif
#if 0
/*3.实现strstr :发现字符串*/
const char* Strstr(const char* str1, const char* str2)
{
	if (str1== NULL || str2 == NULL)//合法性校验
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
		{//找到了字符串
			return black_ptr;
		}
		else//  *red_ptr == '\0'或 *red_ptr != *sub_ptr这两种情况
		{
			++black_ptr;
		}		
	}
	return NULL;
}
int main()
{
	const char str1[12] = "hello world";
	const char str2[] = "world";
	const char* ret=Strstr(str1, str2);
	if (ret == NULL)
	{
		printf("没有找到\n");
	}
	else
	{
		printf("找到了\n");
	}
	return 0;
}

#endif
/*4.实现strchr(s,c):查找字符串s中首次出现字符c的位置。*/
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
int main()
{
	char str1[] = "abcdecde";
	int  c = 'c';
	char* ret=strchr(str1, c);
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("%d\n", *ret);//-&str1+1);
	}
	return 0;
}
#if 0
#endif
/*实现strcmp:*/