#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
int main()
{
	printf("hellow word\n");
}
#if 0
//作业int main()
//{
//	int i = 0;
//	float sum1 = 0.0;
//	float sum2 = 0.0;
//	float sum = 0.0;
//	//float m ;
//	//float n ;
//	int b = 1;
//	for(i = 0; i <= 100; i++)
//	{
//		b++;
//		if (b % 2 == 1)
//		{
//			sum1 = 1.0 / b;
//		}
//		else
//		{
//			sum2 = -1.0 / b;
//		}
//	}
//	sum = sum1 + sum2;
//	printf("%d\n", sum);
//	//system("pause");
//	return 0;
//}
//int main()
//{
//	double sum;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1) 
//		{
//			sum += 1.0 / i;
//		}
//		else if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//	}
//	printf("结果为：%f\n", sum);
//	return 0;
//}
int main()

{

	int i, n;//定义循环控制变量和分母值

	double sum, k = 1;//定义求和变量和转变符号的变量的初值

	printf("please input number n:\n");//提示用户输入想要的分母值

	scanf("%d", &n);//需要用户输入的n的值

	for (i = 1, sum = 0; i <= n; i++)//循环从1到n进行求和

	{

		sum += k / i;//累加求和

		k *= -1;//实现符号的变换

	}

	printf("%lf\n", sum);//输出结果

	return 0;

}

int main()
{
	int 
}
//编写程序数一下1到 100 的所有整数中出现多少个数字9。
int main()
{
	int i = 1;
	int j = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			j = j + 1;
		}
		else if (i/9 == 10)
		{
			j = j + 1;
		}
		else if (i/9==11)
		{
			j = j +1;
		}

	}
	printf("%d\n",j);
	return 0;
}
//将数组a中的内容和数组b中的内容进行交换。 
//（数组一样大）


int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 6, 7, 8, 9, 10 };
	int i = 0;
	int temp;
	for (i = 0; i < 5; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
		printf("a%d=%d  ", i, arr1[i]);
		printf("b%d=%d  ", i, arr2[i]);
	}

	system("pause");
	return 0;
}
#endif
