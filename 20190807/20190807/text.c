#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
//5.实现一个函数，判断一个数是不是素数。
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
	printf("请输入您要判断的数：");
	scanf("%d",&n);
	if (TEX(n) == 1)
	{
		printf("它是素数/质数\n");
	}
	else
	{
		printf("它是合数\n");
	}
	return 0;
}

////4. 
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值
void init(int a[],int sz)//初始化数组、
{
	int i = 0;
	for (i= 0; i <sz; i++)
	{
		a[i] = i;
		printf("%d",a[i]);
	}
	printf("\n");
}
void empty(int a[], int sz)//清空数组、
{
	int i = 0;
	for (i = 0; i <sz; i++)
	{
		a[i] = 0;
		printf("%d", a[i]);
	}
	printf("\n");
}
void reserve(int a[], int sz)//完成数组元素的逆置。
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

//3..实现一个函数判断year是不是润年
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
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
	leapyear(1746);
	return 0;
}

//2.使用函数实现两个数的交换。
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

//1.1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
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
	printf("请输入您需要的行数或列数：");
	scanf("%d",&n);
	func(n);
	return 0;
}
#endif