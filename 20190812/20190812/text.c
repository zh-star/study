#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
/*1.ʵ��һ�����������������ַ����е�k���ַ��� 
ABCD����һ���ַ��õ�BCDA 
ABCD���������ַ��õ�CDAB
����   k=2,       �ַ�����abcdef
����ab �����õ�bacdef         ����cdef�����õ�bafedc,    ����bafedc �����͵õ�cdefab
������дһ�������Ľ����������ֱ����ý��������������������ֵ������kǰ���ַ������ڽ���k����ַ�����֮�������彻��*/
void swap(char a[],int left,int right)
{
	int ret = 0;
	while (left < right)
	{
		ret = a[left];
		a[left] = a[right];
		a[right] = ret;
		left++;
		right--;
	}
}
void leftswap(char a[],int k,int len)
{
	int left = 0;
	int right =k-1;
	swap(a, left, right);//����Ҫ����kλת��
	left = k;
	right = len - 2;
	swap(a, left, right);//��ʣ���ת��
	left = 0;
	right = len - 2;
	swap(a,left, right);//ȫ������ת��
}
int main()
{
	char a[] = "abcdef";
	int len = sizeof(a) / sizeof(a[0]);
	int k = 3;	
	leftswap(a,k, len);
	printf("%s\n", a);
	return 0;
}
/*���Ͼ��� 
��һ����ά����. 
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����. 
�������������в���һ�������Ƿ���ڡ� 
ʱ�临�Ӷ�С��O(N); */
#if 0
void find(int arr[][3], int *row, int *col, int key)
{
	int x = 0;
	int y = *col - 1;
	while (x <*row&&y>0)//�ж�����
	{
		if (arr[x][y] == key)//�ҵ�
		{
			*row = x;
			*col = y;
			return;
		}
		else if (arr[x][y] < key)
		{
			x++;//�任��
		}
		else
		{
			y--;//�任��
		}
	}
	*row = -1;
	*col = -1;
}
int main()
{
	int arr[3][3]= {1,2,3,4,5,6,7,8,9};
	int x=3;
	int y=3;
	int *row = &x;
	int *col = &y;
	int key=5;
	find(arr,row,col,key);
	if (*row == -1 && *col == -1)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ %d,%d\n", *row, *col);
	}
	system("pause");
	return 0;
}

/*1.��������ʹ����ȫ����λ��ż��ǰ��*/
void func1(int a[],int len)
{
	int left = 0;
	int right = len - 1;
	int temp = 0;
	while (left < right)
	{
		if (a[left] % 2 == 1)
		{
			left++;
		}
		else if (a[right] % 2 == 0)
		{
			right--;
		}
		else
		{
			temp = a[left];
			a[left] = a[right];
			a[right] = temp;
		}
	}
}
void print(int a[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main()
{
	int a[] = { 1, 2, 4, 3, 5, 11, 7, 8, 15, 9, 6 };
	int len = sizeof(a) / sizeof(a[0]);
	func1(a, len);
	print(a, len);
	return 0;
}
#endif
