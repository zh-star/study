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

//递归方式实现打印一个整数的每一位 
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

//6.递归和非递归分别实现求n的阶乘
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

//5.递归和非递归分别实现strlen
int  mystrlen2(char *p)//递推
{
	if (*p == '\0')
	{
		return 0;
	}
	return 1 + mystrlen2(p + 1);
}
int mystrlen(char *p)//非递归
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

//4. 编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。 
//要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char *string)
{
	if (*string != '\0')
	{
		reverse_string(string + 1);//递归
		printf("%c ", *string);
	}
	else
	{
		return;//终止条件：*string == '\0'，开始往回返并打印
	}
}
int main()
{
	char *a = "abcdef";
	reverse_string(a);
	printf("\n");
	return 0;
}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 
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

//2.编写一个函数实现n^k，使用递归实现
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
//1.非递归实现求第n个斐波那契数。
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
//1.递归实现求第n个斐波那契数。
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