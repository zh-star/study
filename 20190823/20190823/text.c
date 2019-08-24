#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define  SIZE 20
/*编写一个程序， 从标准输入读取几行输入。每行输入都要打印到标准输出上，前面要加上行号。在编写这个程序时要试图让程序能够处理的输入行的长度没有限制。*/
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
/*编写一个程序，一行行地读取输入行，直至到达文件尾。算出每行输入行的长度，然后把最长的那行打印出来。为了简单起见，你可以假定所有的输入行均不超过000个字符。*/
int main()
{
	char input[SIZE];
	int len;
	char long_string[SIZE];
	int long_len;
	long_len = -1;
	while (gets(input) != NULL)//get()函数输入字符串是按回车键后ctrl+zji结束（vs中）Linux中ctrl+d
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