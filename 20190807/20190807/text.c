#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
//5.ʵ��һ���������ж�һ�����ǲ���������
int TEX(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
int main()
{
	int n;
	printf("��������Ҫ�жϵ�����");
	scanf("%d",&n);
	if (TEX(n) == 1)
	{
		printf("��������/����\n");
	}
	else
	{
		printf("���Ǻ���\n");
	}
	return 0;
}

////4. 
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ
void init(int a[],int sz)//��ʼ�����顢
{
	int i = 0;
	for (i= 0; i <sz; i++)
	{
		a[i] = i;
		printf("%d",a[i]);
	}
	printf("\n");
}
void empty(int a[], int sz)//������顢
{
	int i = 0;
	for (i = 0; i <sz; i++)
	{
		a[i] = 0;
		printf("%d", a[i]);
	}
	printf("\n");
}
void reserve(int a[], int sz)//�������Ԫ�ص����á�
{
	int i = 0;
	for (i = sz-1; i >=0; i--)
	{
		a[i] = i;
		printf("%d", a[i]);
	}
	printf("\n");
}
int main()
{
	int a[10];
	int sz = sizeof(a) / sizeof(a[0]);
	init(a, sz);
	empty(a, sz);
	reserve(a, sz);
	return 0;
}

//3..ʵ��һ�������ж�year�ǲ�������
int leapyear(int n)
{
	if (n % 4 == 0 && n != 400 || n % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	if (leapyear(1746) == 1)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	leapyear(1746);
	return 0;
}

//2.ʹ�ú���ʵ���������Ľ�����
void myswap(int *a,int *b)
{
	int temp = *a;
	*a =*b;
	*b = temp;
}
int main()
{
	int A=10,B=20;
	myswap(&A,&B);
	printf("a=%d b=%d",A,B);
	return 0;
}

//1.1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
void func(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, j*i);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	printf("����������Ҫ��������������");
	scanf("%d",&n);
	func(n);
	return 0;
}
#endif