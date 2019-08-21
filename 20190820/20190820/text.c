#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#if 0
/*5.2.写代码可以在整型有序数组中查找想要的数字， 
找到了返回下标，找不到返回-1.（折半查找）*/
int func1()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n =6;
	int left = 0;
	int right = sz - 1;
	for (; left<=right; )
	{
		int mid = (left + right) / 2;
		if (n >arr[mid])
		{

			left = mid + 1;
		}	
		else if(n<arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

/*3.编写代码模拟三次密码输入的场景。 
 最多能输入三次密码，密码正确，提示“登录成功”,密码错误， 
 可以重新输入，最多输入三次。三次均错，则提示退出程序。 */
void func2()
{
	char a[7] = "0";
	int i=0;	
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", a);
		if (strcmp(a, "123456") == 0)
		{
			printf("登陆成功！\n");
			break;
		}
		else if (i<2)
		{
			printf("密码错误，您还有%d次输入机会！\n",2-i);
		}
		else
		{
			printf("密码错误\n");
		}
	}
}

/*4.编写一个程序，可以一直接收键盘字符， 
如果是小写字符就输出对应的大写字符， 
如果接收的是大写字符，就输出对应的小写字符， 
如果是数字不输出。 */
void func3()
{
	char arr[100] = {0};
	scanf("%s", arr);
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < 100; i++)
	{
		if ((arr[i]>'A') && (arr[i] < 'Z'))
		{
			printf("%c", arr[i] + 32);
		}
		else if ((arr[i]>'a') && (arr[i] < 'z'))
		{
			printf("%c", arr[i] - 32);
		}
		else 
		{
			continue;
		}
	}
}

/*1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。 */
void func4()
{
	int n = 0;
	printf("输入您需要的的乘法口诀表行数或列数：");
	scanf("%d", &n);
	int i = 0; 
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, i*i);
		}
		printf("\n");
	}
}
#endif
/*.使用函数实现两个数的交换。 */
void func5()
{

}
int main()
{

	func5();
	//func4();
	//func3();
	//func2();
	/*int ret=func1();
	printf("%d\n", ret);*/
	return 0;
}


