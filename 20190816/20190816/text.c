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

/*ģ��ʵ��strcat*/
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
/*.ģ��ʵ��strcpy(a,b)��b�ַ���copy��a������\0��*/
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

/*2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ�� 
��20Ԫ�����Զ�����ˮ�� 
���ʵ�֡�*/

int main()
{
	int m = 20;
	int n = 1, s;     //n:����»��ģ�s:��һ�λ���֮��ʣ���
	int sum = m;
	while (n != 0)
	{
		n = m / 2;
		s = m % 2;
		m=s + n;//�»���+�ϴ�ʣ���=�´�Ҫ��ȥ����
		sum = sum + n;//ÿ��Ҫ�����»���
	}	
	printf("%d\n",sum);
	return 0;
}

/*1.һ��������ֻ�����������ǳ���һ�Σ� 
�����������ֶ����������Ρ� 
�ҳ����������֣����ʵ�֡�*/
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