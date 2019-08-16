#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#if 0
char* my_strcat(char* dest, char* src)
{
	char *cp = dest;
	//assert(src && dest);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return cp;
}

int main()
{
	char arr1[15] = "abcd";
	char arr2[] = "efhij";
	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}

#endif

/*模拟实现strcat*/
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "hijwr";
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	int i = 0,j=0;
	for(i = 0; i < sz1 - 1; i++)
	{
		if (arr1[i] == '\0')
		{
			for (j = 0; j < sz2-1; j++)
			{
				arr1[i] = arr2[j];
				i++;
			}			
		}
	}
	printf("%s\n",arr1);
	return 0;
}
#if 0
/*.模拟实现strcpy(a,b)将b字符串copy给a，包括\0，*/
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "hijklh";
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		if (arr2[i] != "\0")
		{
			arr1[i] = arr2[i];
		}
		else
		{
			break;
		}
	}
	printf("%s\n",arr1);
	return 0;
}

/*2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
给20元，可以多少汽水。 
编程实现。*/

int main()
{
	int m = 20;
	int n = 1, s;     //n:这次新换的，s:上一次换过之后剩余的
	int sum = m;
	while (n != 0)
	{
		n = m / 2;
		s = m % 2;
		m=s + n;//新换的+上次剩余的=下次要拿去换的
		sum = sum + n;//每次要加上新换的
	}	
	printf("%d\n",sum);
	return 0;
}

/*1.一个数组中只有两个数字是出现一次， 
其他所有数字都出现了两次。 
找出这两个数字，编程实现。*/
int main()
{
	int arr[7] = { 1, 2 ,3, 4, 5, 6,1 };
	int i = 0,j=0;
	int ret = 0;
	for (i = 0; i < 7; i++)
	{
		for (j = i+1; j < 7; j++)
		{
			if (arr[i] == arr[j])
			{
				ret = arr[i];
				break;
		    }
		}
	}
	printf("%d\n",ret);
	return 0;
}
#endif