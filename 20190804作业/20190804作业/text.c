#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ӡ100~200֮�������

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
	printf("�������У� \n");
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
//���ֵ
int main()
{
	int i,sex;
	int a[10] = {0};
	printf("������ʮ�����֣� ");
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
	printf("�δ�ֵ��%d\n",sex );
	printf("���ֵ��%d\n",max);
	return 0;
}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
int main()
{
	int i, flage=1;
	double sum = 0, temp=0;
	for (i = 1; i <= 100; i++)
	{
		temp=flage*1.0/i;//����flage=1
		sum = temp + sum;
		flage *= -1;		//��flage��-1����i=2ʱ����������ǳ���-2
	}
	printf("%lf", sum);//double�ʹ�ӡ��ʽΪ%lf
}
//������A�е����ݺ�����B�е����ݽ��н����� ������һ����(��ʱ������) 


int main()
{
	int i;
	int arr1[5] = {0};
	int arr2[5] = {0};
	printf("������a������");
	for (i = 0; i <= 5; i++)
	{
		scanf("%d ", &arr1[i]);	
	}
	putchar("\n");
	i = 0;
	printf("������b������");
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
	printf("a������");
	for (i = 0; i <= 5; i++)
	{
		printf("%d ", arr1[i]);	
	}
	i = 0;
	printf("b������");
	for (i = 0; i <= 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	putchar("\n");
	return 0;
}



//�������������Լ��������Ϊ0��ʱ�򣬳����������Լ��
int main()
{
	int i,max;
	int a,b;
	printf("��������������");
	scanf("%d %d",&a,&b);
	int temp = a < b ? a : b;
	for (i = 1; i <= temp; i++)
	{
		if (a%i == 0 && b%i == 0)
		{
			max = i;
		}
	}
	printf("���Լ���ǣ�%d\n", max);
	return 0;
}

//1.�����������Ӵ�С���(������)��
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
//1.�����������Ӵ�С���(ð�ݷ�)
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
		for (i = 0; i < 2 - j; i++)//�ȱȽ�a1��a2�����a2��ͽ��������򲻽������ٱȽ�a2��a3 �����н���������֮��Ҫ����a1��a2�ıȽϣ�������j��ѭ��
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