#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#if 0
/*5.2.д����������������������в�����Ҫ�����֣� 
�ҵ��˷����±꣬�Ҳ�������-1.���۰���ң�*/
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

/*3.��д����ģ��������������ĳ����� 
 ����������������룬������ȷ����ʾ����¼�ɹ���,������� 
 �����������룬����������Ρ����ξ�������ʾ�˳����� */
void func2()
{
	char a[7] = "0";
	int i=0;	
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", a);
		if (strcmp(a, "123456") == 0)
		{
			printf("��½�ɹ���\n");
			break;
		}
		else if (i<2)
		{
			printf("�������������%d��������ᣡ\n",2-i);
		}
		else
		{
			printf("�������\n");
		}
	}
}

/*4.��дһ�����򣬿���һֱ���ռ����ַ��� 
�����Сд�ַ��������Ӧ�Ĵ�д�ַ��� 
������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ��� 
��������ֲ������ */
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

/*1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ��� */
void func4()
{
	int n = 0;
	printf("��������Ҫ�ĵĳ˷��ھ���������������");
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
/*.ʹ�ú���ʵ���������Ľ����� */
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


