#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int i = 0;
	int j = 0;
	printf("转置前：\n");
	for (i = 0; i <4; i++)
	{
		for (j = 0; j<4; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("转置后： \n");
	for (i = 0; i <4; i++)
	{
		for (j = 0; j<4; j++)
		{
			printf("%2d ", arr[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}