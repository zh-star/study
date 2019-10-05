#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
long long  func1(int m, int n)
{
	int i = 0;
	long long  ret= 0;
	int mid;
	long long  count = 0;
	for (i = 0; i<n; i++)
	{
		ret = ret*10 + (i + 1);
		//printf("%d\n",ret);
		mid = i;
		for (; (mid >= (m - 1)) && mid<n;)
		{
			if (ret % 3 == 0)
			{
				count++;
				break;
			}
		}
	}
	return count;
}
int main()
{
	int m, n;
	//int n;
	scanf("%d%d", &m, &n);
	printf("%d\n", func1(m, n));
	return 0;
}
