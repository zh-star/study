#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
int main()
{
	printf("hellow word\n");
}
#if 0
//��ҵint main()
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
//	printf("���Ϊ��%f\n", sum);
//	return 0;
//}
int main()

{

	int i, n;//����ѭ�����Ʊ����ͷ�ĸֵ

	double sum, k = 1;//������ͱ�����ת����ŵı����ĳ�ֵ

	printf("please input number n:\n");//��ʾ�û�������Ҫ�ķ�ĸֵ

	scanf("%d", &n);//��Ҫ�û������n��ֵ

	for (i = 1, sum = 0; i <= n; i++)//ѭ����1��n�������

	{

		sum += k / i;//�ۼ����

		k *= -1;//ʵ�ַ��ŵı任

	}

	printf("%lf\n", sum);//������

	return 0;

}

int main()
{
	int 
}
//��д������һ��1�� 100 �����������г��ֶ��ٸ�����9��
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
//������a�е����ݺ�����b�е����ݽ��н����� 
//������һ����


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
