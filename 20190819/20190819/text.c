#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#if 0
/*1. ������A�е����ݺ�����B�е����ݽ��н�����������һ���� */
void Printf(char a[])
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}

}
void ShuzuSwap()
{
	char a[5] = { 1, 2, 3, 4, 5 };
	char b[5] = { 6, 7, 8, 9, 10 };
	int i = 0;
	int temp;
	for (i = 0; i < 5; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	Printf(a);
	printf("\n");
	Printf(b);
	printf("\n");

}

/*2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ�� */
void func1()
{
	int i = 0;
	int temp = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + temp*(1.0 / i);
		temp = temp*(-1);
	}
	printf("%lf\n", sum);
}

/*3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9�� */
void func2()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		else if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
}

/*.����Ļ���������ͼ��*/
void func3()
{
	int i = 0, j = 0;
	for (i = 1; i <=7; i++)
	{
		for (j = 1; j <= 7 - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <=2*i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 6; i >=1; i--)
	{
		for (j = 1; j <= 7 - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
	
		printf("\n");
	}
}

/*2.���0��999֮������С�ˮ�ɻ������������ 
��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153 = 1^3 + 5^3 + 3^3����153��һ����ˮ�ɻ������� */

void func4()
{
	int i = 0;
	for (i = 0; i < 1000000; i++)
	{
		int count = 1;
		int temp = i;
		int  sum=0;
		while (temp / 10)
		{
			count++;
			temp /= 10;
		}
		temp = i;//����ÿ������ÿһλ��λ���η���֮ǰ��Ҫ��ԭ����ֵ���������������λ��ʱ�����������˸ı�
		while (temp)
		{
			sum += pow(temp % 10, count);
			temp /= 10;
		}
		if (i == sum)
		{
			printf("%d ",i);
		}
	}
}

/*��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2+22+222+2222+22222  */
void func5()
{
	int a = 2;
	int n = 5;
	int i = 0;
	int sum = 0;
	int temp = 0;
	for (i = 0; i < n; i++)
	{
		temp = temp+a*pow(10, i);//i=0,sum=2;i=1,sum=22,
		sum = sum + temp;
		printf("%d ", temp);//��ӡ��ÿһλ��2  22 222 2222
	}
	printf("%d\n", sum);
}

int main()
{
	func5();
	//func4();
	//func3();
	//func2();
	//func1();
	//ShuzuSwap();

	return 0;
}

/*1.��ɲ�������Ϸ��*/
void game()
{
	int rand_num = rand() % 100 + 1;//rand()%100����[0,99��������� ͷ�ļ���stdlib.h   ��Ҫ����[0��10)���������rand()%10
	int input = 0;
	while (1)
	{
		printf("��������Ҫ�µ����֣�\n");
		scanf("%d", &input);
		if (input > rand_num)
		{
			printf("���´��ˣ�\n");
		}
		else if (input < rand_num)
		{
			printf("����С�ˣ�\n");		
		}
		else
		{
			printf("���¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	printf("����������ѡ��\n");
	scanf("%d", &input);
	switch(input)
	{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
				printf("��Ϸ�˳�\n");
		default:
			printf("������������\n");
			break;
	}
	return 0;
}
#endif
int main()
{
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1, c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}