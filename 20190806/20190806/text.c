#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include<math.h>
int fib1(int n)
{
	int f1=1;
	int f2=1;
	int f3=0;
	int i = 0;
	for (i = 0; i <= n;i++)
	{
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main()
{
	printf("%d\n",fib1(5));
	return 0;
}

#if 0
void  reverse_string(char*string)
{
	if (*string == '\0')
	{		
		printf("%c", *string);
		string--;
	}
	//	else
	//{
	reverse_string(string + 1);
	//}
}
int main()
{
	char *string = "abcd";
	reverse_string(string);
	return 0;
}

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
int fun( unsigned int num)
{
	if (num >9)
	{
		fun(num / 10);
	}
    	printf("%d ", num%10);
}
int main()
{
	fun(62387);
	return 0;
}

//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
int Fac1(int n)
{
	int i,ret=1;
	for (i = 1; i <= n; i++)
	{
		ret =ret*i;
	}
	return ret;
}
int Fac(int n)
{
	if (n== 1)
	{
		return 1;
	}
	else
	{
		return n*Fac(n - 1);
	}
}
int main()
{
	printf("%d\n", Fac1(5));
	return 0;
}

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
int  mystrlen2(char *p)//����
{
	if (*p == '\0')
	{
		return 0;
	}
	return 1 + mystrlen2(p + 1);
}
int mystrlen(char *p)//�ǵݹ�
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char *p = "abcde";
	printf("%d\n",mystrlen2(p));
	return 0;
}

//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С� 
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
void reverse_string(char *string)
{
	if (*string != '\0')
	{
		reverse_string(string + 1);//�ݹ�
		printf("%c ", *string);
	}
	else
	{
		return;//��ֹ������*string == '\0'����ʼ���ط�����ӡ
	}
}
int main()
{
	char *a = "abcdef";
	reverse_string(a);
	printf("\n");
	return 0;
}
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19 
int DigitSum(int n)
{
	if (n <10)
	{
		return n;
	}
	else
	{		
		return  n%10 + DigitSum(n / 10);
	}
}
int main()
{
	printf("%d\n", DigitSum(1879));
	return 0;
}

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
int mypow(int n, int k)
{
	if (k ==0)
	{
		return 1;
	}
	else
	{
		return n*mypow(n,k -1);
	}
}
int main()
{
	printf("%d\n",mypow(2,3));
	return 0;
}
//1.�ǵݹ�ʵ�����n��쳲���������
int fib1(int n)
{
	int f1=1;
	int f2=1;
	int f3=0;
	int i = 0;
	for (i = 0; i <= n;i++)
	{
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main()
{
	printf("%d\n",fib1(5));
	return 0;
}
//1.�ݹ�ʵ�����n��쳲���������
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}	
}
int main()
{
	printf("%d",fib(5));
	return 0;
}
#endif