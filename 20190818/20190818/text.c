#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
/*1. ��ӡ100~200 ֮�������     ���������ܱ�1�������������κ��������� */

void Prime()
{
	int i = 0;
	int j = 0;
	printf("�����У�");
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
			else
			{
				printf("%d  ", i);
				break;
			}	
		}	
	}
}

/*2. ����˷��ھ��� */
void Mul()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)//��
	{
		for (j = 1; j <= i; j++)//��
		{
			printf("%d*%d=%d  ", j, i, j*i);
		}
		printf("\n");
	}
}

/*3. �ж�1000��---2000��֮������� �����꣺�ܱ�4�����Ҳ��ܱ�100���������ܱ�400����*/
void  Leap()
{
	int i = 0;
	printf("�����У�");
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100  !=0 )|| i % 400 == 0)
		{
			printf("%d  ",i);
		}
	}
}

/*2.1. �����������α�����ֵ��������ֵ�����ݽ��н�����*/
void swap(int* p,int* q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

/*2. ����������ʱ���������������������ݣ������⣩ */
void swap1(int* p, int*q)
{
	*p = *p ^ *q;	
	*q = *p ^*q;
	*p = *p ^ *q;
	/**p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;*/
}

/*3.��10 �����������ֵ�� */
int Max(int  arr[10])
{
	int i = 0;
	int j = 0;
	int max = 0;
	int sex = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (max<arr[i ])
		{
			//sex = max;//��δ�ֵʱ�ɼ���䣬sex���ص�Ϊ�δ�ֵ
			max = arr[i];
		}
	}
	/*for (i = 0; i < 10; i++)//ð�ݷ���
	{	
		for (j = 0; j < 10; j++)
		{	
			if (arr[j] < arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}	
	    }
	}*/
	return max;
}

/*�����������Ӵ�С�����*/
void swap(int* p, int* q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
void SumberSort()
{
	int arr[3] = { 0 };
	int i = 0, j = 0;
	printf("������Ҫ������������֣�");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[j]<arr[j+1])
			{
				swap(&arr[j], &arr[j + 1]);			
			}
		}
	}
	for (i = 0; i < 3; i++)//��ӡ����Ҫ��ѭ������
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
#endif
/*�������������Լ����   ���Լ����������1����С���Ǹ���֮����������֣�ͬʱ��������Ϊ0��ʱ�򣬳����������еĹ�Լ������ȥ�õ����Լ��*/
void MaxGongYueShu()
{
	int a=0, b=0;
	int i, temp;
	int ret;//���Լ��
	printf("��������������");
	scanf("%d%d", &a, &b);
	 temp = a < b ? a : b;
	for (i = 1; i <=temp; i++)
	{
		if (a%i== 0 && b%i == 0)
		{
			ret = i;
		}
	}
	printf("���Լ��Ϊ��%d\n", ret);
}
int main()
{
	MaxGongYueShu();
	//SumberSort();
	/*int arr[10] = { 0 };
	printf("��������Ҫ�Ƚϵ�10�����֣�");
	int ret=Max(arr);
	printf("%d\n",ret);*/
	/*int a = 3;
	int b = 4;
	//swap(&a, &b);
	swap1(&a, &b);
	printf("%d  %d\n", a, b);*/
	//Leap();
	//Mul();
	//Prime();
	return 0;
}