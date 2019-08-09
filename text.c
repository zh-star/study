#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
//int main()
//{
//
//	int a, b, c;
//	printf("输入两个数字求最大公约数：");
//	scanf("%d%d", &a, &b);
//	c = (a>b) ? b : a;   //三目运算符 将最小的赋给c
//	while (a%c != 0 || b%c != 0)    //a，b同时能被c整除 不执行该循环
//	{
//		c--;
//	}
//	printf("最大公约数为：%d\n", c);
//
//}
//将三个数按从大到小输出
#include <stdio.h>
int main()
{
	int i, j, t;
	int a[3] = {0};
	for (i = 0; i <= 2;i++ )
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
/*
//求10 个整数中最大值。
int main()
{
	int i = 0;
	int arr[10] = {0};
	int max = arr[0];
	printf("请输入十位整数：\n");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	i = 0;
	while (i <= 9)
	{
		i++;
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("最大的数是： %d\n", max);
}
//int max(int a ,int b)
//{
//	return a > b ? a : b;
//}
int main()
{
	int a = (1,2,3,4,5,6,7,8,9,10);
	int b=0;
	int ret = a > b ? a : b;//max(a,b);
	printf("%d\n",ret);
    return 0;
}


//不允许创建临时变量，交换两个数的内容（附加题）
int main()
{
	int a = 2;
	int b = 3;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n",a,b);
}

//给定两个整形变量的值，将两个值的内容进行交换
int main()
{
	int a=2;
	int b=3;
	int temp;//定义第三个变量
	temp = a;
	a = b;
	b = temp;
	printf("%d  %d\n",a,b);
    return 0;
}
#if0
//判断1000年到2000年之间的闰年
int main()
{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0)&&( i % 400 != 0))
			printf(" %d ",i);

	}
		return 0;
}
//输出乘法口诀表
int main()
{
	int i, j;
	for (i = 1; i <= 9;i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %d*%d=%d ",j,i,j*i);
			//if (j == i)
			//	printf("\n");
		}
	}
		return 0;
}

//打印100~200之间的素数
int main()
{
	int i ,j;
    for (i = 101; i <= 200;i++)
	{

		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
			else 
			{
				printf(" %d ", i);
				break;
			}
			
		}
	}
	printf("\n");
	return 0;
	}
	
#endif
	*/