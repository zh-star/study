#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*����Ļ�ϴ�ӡ������ǡ� 
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 */
int main()
{
	int i,j;
	int arr[5][5];
	for (i = 0; i < 5; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (i = 2; i < 5; i++)
	{
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2 * (5 - i); j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}			
}
#if 0
/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4���� 
���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ� 
A˵�������ҡ� 
B˵����C�� 
C˵����D�� 
D˵��C�ں�˵ 
��֪3����˵���滰��1����˵���Ǽٻ��� 
�����������Щ��Ϣ��дһ��������ȷ������˭������*/

int main()
{
	int temp;
	for (temp = 'A'; temp <= 'D'; temp++)
	{
		if ((temp != 'A') + (temp == 'C') + (temp == 'D') + (temp != 'D') == 3)
		{
			printf("%c", temp);
		}
	}
	return 0;
}

/*5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ�������� 
Aѡ��˵��B�ڶ����ҵ����� 
Bѡ��˵���ҵڶ���E���ģ� 
Cѡ��˵���ҵ�һ��D�ڶ��� 
Dѡ��˵��C����ҵ����� 
Eѡ��˵���ҵ��ģ�A��һ�� 
����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�*/


int main()
{
	int a, b, c, d, e ;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b != 2) && (a == 3)) || ((b == 2) && (a != 3))==1)
						{
							if (((b != 2) && (e == 4)) || ((b == 2) && (e != 4))==1)
							{
								if (((c != 1) && (d == 2)) || ((c == 1) && (d != 2))==1)
								{
									if (((c != 5) && (d == 3)) || ((c == 5) && (d != 3))==1)
									{
										if (((e != 4) && (a == 1) )|| ((e == 4) && (a != 1))==1)
										{
											if ((a != b) && (a != c) && (a != d) && (a != e) && (b != c) && (b != d) && (b != e) && (c != d) && (c != e) && (d != e))
											{
												printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);

											}
										}
									}
								}
							}
						}
					}
				}
			}

		}
	}
	return 0;
}

/*1. 
дһ���������ز����������� 1 �ĸ���
���磺 15 0000 1111 4 �� 1
����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
	// ���� 1��λ�� 
}*/
int count_one_bits(unsigned int value)
{
	int i = 0;
	int count=0;
	/*while (value != 0)
	{
		count++;
		value = value&(value - 1);//���ַ���
	}
	return count;*/
	/*while (value != 0)
	{
		if (value%2==1)
		{
			count++;	
		}
		value = value / 2;
	}
	return count;*/
	/*for (i = 0; i < 32; i ++ )
	{
		if ((value&1) != 0)
		{
			count++;
		}
		value=value >> 1;
	}
	return count;*/
	while (value != 0)
	{
		if ((value & 1) != 0)
		{
			count++;
		}
		value = value >> 1;
	}
	return count;
}
int main()
{
	printf("%d\n", count_one_bits(15));
	return 0;
}
/*2.��ȡһ�������������������е�ż��λ������λ�� 
�ֱ�������������С�������31λʣ��һλ����ʼ������1�õ�*/
void fucn(int n)
{
	int i;
	printf("ż��λ��");
	for (i = 31; i >= 1; i -= 2)//ÿ���ƶ�֮ǰ����λ
	{
		printf("%d",(n>>i)&1);
	}
	printf("����λ��");
	for (i = 30; i >=1; i -= 2)
	{
		printf("%d", (n>>i)& 1);
	}
}
int main()
{
	fucn(42);
	return 0;
}

//���һ��������ÿһλ�� 
void  func1(int n)
{
	if (n>9)
	{	
		func1(n/10);
	}
	printf("%d ", n%10);

}
/*void  func(int n)
{
	while (n > 9)
		{
			printf("%d ",n%10);
			n = n / 10;
		}
	printf("%d ",n);
}*///��� 3 6 7 1
int main()
{
	func(1763);
	return 0;
}

/*���ʵ�֣� 
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
��������: 
1999 2299 
�������:7 */
int func(int temp)
{
	int count=0;
	while (temp != 0)
	{
		temp= temp&(temp-1);//��һ������������1�ĸ���
		count++;
	}
	return count;
}
int main()
{
	int m, n,temp;
	printf("����������������");
	scanf("%d%d",&m,&n);
	temp = m^n;//��������λ���֮��õ��ľ������Ƕ����Ʋ��õĵط�
	printf("%d\n",func(temp));
	return 0;
}
#endif