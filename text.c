#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
//int main()
//{
//
//	int a, b, c;
//	printf("�����������������Լ����");
//	scanf("%d%d", &a, &b);
//	c = (a>b) ? b : a;   //��Ŀ����� ����С�ĸ���c
//	while (a%c != 0 || b%c != 0)    //a��bͬʱ�ܱ�c���� ��ִ�и�ѭ��
//	{
//		c--;
//	}
//	printf("���Լ��Ϊ��%d\n", c);
//
//}
//�����������Ӵ�С���
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
/*
//��10 �����������ֵ��
int main()
{
	int i = 0;
	int arr[10] = {0};
	int max = arr[0];
	printf("������ʮλ������\n");
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
	printf("�������ǣ� %d\n", max);
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


//����������ʱ���������������������ݣ������⣩
int main()
{
	int a = 2;
	int b = 3;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n",a,b);
}

//�����������α�����ֵ��������ֵ�����ݽ��н���
int main()
{
	int a=2;
	int b=3;
	int temp;//�������������
	temp = a;
	a = b;
	b = temp;
	printf("%d  %d\n",a,b);
    return 0;
}
#if0
//�ж�1000�굽2000��֮�������
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
//����˷��ھ���
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

//��ӡ100~200֮�������
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