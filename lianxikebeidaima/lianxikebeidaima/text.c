#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[7] = {1,3,4,9,3,1,4};
	int i;
	int ret = 0;
	for (i = 0; i < 7; i++)
	{
		ret = ret^arr[i];
	}
	printf("%d",ret);
	return 0;
}
#if 0
int main()
{
	int a = 5;
	int b=2;
	printf("%d\n",a/b);//2
	printf("%f\n", a / b);//0.000000浮点数在内存当中的储存？
	printf("%f\n",(float)a/b);//2.500000
	printf("%f\n",a/(float)b);//2.500000
	printf("%f\n",(float)(a/b));//2.00000
	printf("%f\n",a/2.0);//2.500000
	printf("%f\n", 5.0 / 2);//2.500000

}

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0;i++, k++)
	{
		k++;
	}
	//printf("%d",k);
	return  0;
}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}
#endif