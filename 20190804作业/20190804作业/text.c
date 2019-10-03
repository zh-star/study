#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//打印100~200之间的素数

int main()
{
	int i = 1;
	do
	{
		if (5 == i)
			break;
		printf("%d\n",i );
	} while (i<10);
	return 0;
}
#if 0
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{

		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
			else
			{
				printf("%d ", i);
				break;
			}

		}
	}
	printf("\n");
	return 0;
}
#endif
int main()
{
	int n=9, i;
	printf("素数都有： \n");
	for (n = 3; n <= 9; n++)
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				break;
			}
			else
			{
				printf("%d ", n);
				break;
			}
		}
		
	}
	printf("\n");
	return 0;
}
#if 0
//最大值
int main()
{
	int i,sex;
	int a[10] = {0};
	printf("请输入十个数字： ");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d",&a[i]);
	}
	int max = a[0];
	for (i = 1; i <= 9; i++)
	{
		if (max < a[i])
		{
			sex = max;
			max = a[i];
		}
	}
	printf("次大值：%d\n",sex );
	printf("最大值：%d\n",max);
	return 0;
}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
int main()
{
	int i, flage=1;
	double sum = 0, temp=0;
	for (i = 1; i <= 100; i++)
	{
		temp=flage*1.0/i;//最先flage=1
		sum = temp + sum;
		flage *= -1;		//当flage乘-1，当i=2时，则上面就是乘以-1
	}
	printf("%lf", sum);//double型打印形式为%lf
}
//将数组A中的内容和数组B中的内容进行交换。 （数组一样大）(暂时有问题) 


int main()
{
	int i;
	int arr1[5] = {0};
	int arr2[5] = {0};
	printf("请输入a组数：");
	for (i = 0; i <= 5; i++)
	{
		scanf("%d ", &arr1[i]);	
	}
	putchar("\n");
	i = 0;
	printf("请输入b组数：");
	for (i = 0; i <= 5; i++)
	{
		scanf("%d ", &arr2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		int temp;
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
		//printf("a%d=%d b%d=%d\n",i,arr1[i],i,arr2[i]);
	}
	printf("a组数：");
	for (i = 0; i <= 5; i++)
	{
		printf("%d ", arr1[i]);	
	}
	i = 0;
	printf("b组数：");
	for (i = 0; i <= 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	putchar("\n");
	return 0;
}



//求两个数的最大公约数。余数为0的时候，除数就是最大公约数
int main()
{
	int i,max;
	int a,b;
	printf("请输入两个数：");
	scanf("%d %d",&a,&b);
	int temp = a < b ? a : b;
	for (i = 1; i <= temp; i++)
	{
		if (a%i == 0 && b%i == 0)
		{
			max = i;
		}
	}
	printf("最大公约数是：%d\n", max);
	return 0;
}

//1.将三个数按从大到小输出(基础法)。
int main()
{
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	if (a > b)
	{
		if (b  > c)
		{
			printf("%d %d %d",a,b,c);
		}
		else if (c > b)
		{
			printf("%d %d %d", a, c, b);
		}
		else
		{
			printf("%d %d %d", c, a, b);
		}
	}
	else if (a<b)
	{
		if (a  > c)
		{
			printf("%d %d %d", b, a, c);
		}
		else if (c > a)
		{
			printf("%d %d %d", b, c, a );
		}
		else
		{
			printf("%d %d %d", c, b , a);
		}
	}
	return 0;
}
//1.将三个数按从大到小输出(冒泡法)
#include <stdio.h>
int main()
{
	int i, j, t;
	int a[3] = { 0 };
	for (i = 0; i <= 2; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 2 - j; i++)//先比较a1和a2，如果a2大就交换，否则不交换。再比较a2和a3 ，进行交换，，，之后还要进行a1和a2的比较，所以有j的循环
		{
			if (a[i] < a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
#endif
