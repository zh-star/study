#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define  SIZE 20
/*��дһ������ �ӱ�׼�����ȡ�������롣ÿ�����붼Ҫ��ӡ����׼����ϣ�ǰ��Ҫ�����кš��ڱ�д�������ʱҪ��ͼ�ó����ܹ�����������еĳ���û�����ơ�*/
int main()
{
	char input[SIZE];
	int i = 1;
	char ch;
	while ((ch=gets(input))!=NULL)
	{
		
		printf("%d.%s\n", i,input);
		if (ch == '@')
		{
			i++;
		}
	}
	return 0;
}
#if 0
/*��дһ������һ���еض�ȡ�����У�ֱ�������ļ�β�����ÿ�������еĳ��ȣ�Ȼ���������д�ӡ������Ϊ�˼����������Լٶ����е������о�������000���ַ���*/
int main()
{
	char input[SIZE];
	int len;
	char long_string[SIZE];
	int long_len;
	long_len = -1;
	while (gets(input) != NULL)//get()���������ַ����ǰ��س�����ctrl+zji������vs�У�Linux��ctrl+d
	{
		len = strlen(input);
		if (len > long_len)
		{
			long_len = len;
			strcpy(long_string,input);
		}
	}
	if (long_len >= 0)
	{
		puts(long_string);
	}

	return 0;
}
#endif