#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
#include  <string.h>//strlen��ͷ�ļ�����һ���ַ����ĳ���
//#include  <windows.h>
#include <stdlib.h>//�����ͷ�ļ�rand
#include <math.h>
//��дһ�����򣬿���һֱ���ռ����ַ��� �����Сд�ַ��������Ӧ�Ĵ�д�ַ��� 
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ��� 
//��������ֲ������ 
//123ABCD45efG ==> abcdEFg 
int main()
{
	char a;	
	while (1)
	{
		scanf("%c", &a);
		if (a >= 'A'&&a <= 'Z')
		{
			printf("%c\n", a + 32);
		}
		else if(a >= 'a'&&a <= 'z')
		{
			printf("%c",a-32);
		}	
		else
		{
			return;
		}
	}
	return 0;
}
#if 0
//2.д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰����)
int binarySearch(int arr[], int len, int key)
{
	int i;
	int left = 0, right = len - 1;
	for (; left <= right;)//����д��whileѭ��
	{
		int mid = (left + right) / 2;
		if (key >arr[mid])
		{
			left = mid + 1;

		}
		else if (key<arr[mid])
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
int main()
{
	int arr[10] = { 2, 5, 7, 8, 9, 10, 24, 27, 29, 41 };
	int len = sizeof(arr) / sizeof(arr[0]);//��������ĳ��ȣ�sizeof()������ռ�ֽ������������ܹ�ռ�õ��ֽ�������������һ��Ԫ����ռ���ֽ�����������ĳ���
	//printf("%d ", len);
	int ret = binarySearch(arr, len, 27);
	printf("%d ", ret);
	return 0;
}

//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
int main()
{
	int count = 3;
	while(count !=0)
	{
		char a[7] = { 0 };//0 '0' '\0' NULL
		scanf("%s",a);
		if(strcmp(a,"666666") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		count--;
		printf("������%d�λ���\n",count);
	}
	return 0;
}

//���0��999999֮������С�ˮ�ɻ��������������ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ������� �磻153��1 ^ 3��5 ^ 3��3 ^ 3 ? ����153��һ����ˮ�ɻ�������
int main()
{
	int i = 0;
	for (i = 0; i < 1000000; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		//���㼸λ��
		while (tmp / 10)
		{
			count++;
			tmp /= 10;
		}
		//����ÿλ���Ĵη���
		tmp = i;
		while (tmp)
		{
			sum +=pow(tmp % 10, count);//pow(a,b)��������a��b�η���ֵ
			tmp = tmp / 10;
		}
		//�Ƚ�
		if (i == sum)
			printf("%d ", i);
	}

	system("pause");
	return 0;
}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰn��֮�ͣ�����a��һ�����֣� 
//���磺2 + 22 + 222 + 2222 + 22222
//�������ͽ׳�����
int main()
{
	int i,a,set=0;
	int sum=0;
	printf("���������֣�");
	scanf("%d",&a);
	for (i = 0; i <= a-1; i++)
	{
		sum = sum + a*pow(10, i);//11=10+1��111=100+11��pow��η��ĺ���
		set += sum;
		printf("%d \n",sum);
	}
	printf("%d ", set);
	return 0;
}
//��������Ϸ

void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("���������µ����֣�");
		scanf("%d",&input);
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input < random_num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	int input;
	srand((unsigned)time(NULL));// 
	printf("��ѡ��1���������Ϸ��0�����˳���:");
	scanf("%d",&input);
	switch (input)
	{
	case 1:
		printf("��ʼ��Ϸ\n");
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("����������\n");
		break;
	}
	return 0;
}

//��ʾͼ��
int main()
{
	int n;
	int i = 0,j=0;
	printf("����������Ҫ��������");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)//ÿ��Ҫ��ӡ7-i���ո�
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1;j++)
		{			
			printf("*");
		}
		printf("\n");
	}
	for (i = n-1; i >= 1; i--)//�����𽥼�С�����ӡ*���ñ䣬ֻ��Ҫ�ı�ո�
	{					
		for (j = 1; j <= n -i; j++)//�ո�������һ��������
		{
			printf(" ");
		}
		for (j = 1; j <= 2*i-1;j++)
		{
			printf("*");
		}				
		printf("\n");
	}
	return 0;
}

int main()
{
	int count = 3;
	char a[7] = {0};
	printf("���������룺");
	scanf("%c\n",a);
	if (strcmp(a, "123456") == 0)
	{
		printf("��½�ɹ���");
	}
	else
	{
		count--;
		printf("�������������%d���������\n",count);
	}	
	return 0;
}

int binarySearch(int arr[], int len, int key)
{
	int i;
	int left = 0,right=len-1;	
	for ( ; left<=right; )//����д��whileѭ��
	{
		int mid = (left+right) / 2;
		if (key >arr[mid])
		{
			left = mid + 1;
			
		}
		else if (key<arr[mid])
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
int main()
{
	int arr[10] = {2,5,7,8,9,10,24,27,29,41};
	int len = sizeof(arr)/sizeof(arr[0]);//��������ĳ��ȣ�sizeof()������ռ�ֽ������������ܹ�ռ�õ��ֽ�������������һ��Ԫ����ռ���ֽ�����������ĳ���
	printf("%d ",len);
	int ret=binarySearch(arr,len,5);
	printf("%d ", ret);
	return 0;
}

int main()
{
	char str1[] = "welcome bit";
	char str2[] = "***********";
	int left = 0;
	int right = strlen(str1)-1;//��һ���ַ����ĳ��ȣ�ͷ�ļ�Ϊstring.h
	for (left = 0; left <= right;left++)
	{
		Sleep(100);//��ʱ��ͷ�ļ�Ϊwindows.h
		str2[left] = str1[left];
		str2[right] = str1[right];//ֻ�ý�2���黻��1���飬���ý�1����2
		right--;
		printf("%s\n",str2);
	}
	return 0;
}
int main()
{
	int n = 3;
	int i = 0,j=0;
	int ret = 1,sum=0;
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= j; i++)
		{
			ret = 1;
			ret *= i;
		}
		printf("%d ", ret);
		sum = sum + ret;
	}
	printf("%d",sum);
	return 0;
}
//�׳�
int main()
{
	int n = 3;
	int i = 0, j = 0;
	int ret = 1, sum = 0;
#if 0
	//for (j = 1; j <= n; j++)
	//{
	for (i = 1; i <= n; i++)
	{
		//ret = 1;
		ret *= i;
		sum = ret + sum;
		printf("%d ", ret);//ÿ���׳�
	}
	printf("%d ", ret);//n�Ľ׳�
	//sum = sum + ret;
	//}
	printf("%d", sum);//n�Ľ׳�֮��
#endif
	for (i = 1; i <= 3; i++)
	{
		ret *= i;//һ�����Ľ׳�=ǰһ�����Ľ׳�*�����
	}
	printf("%d", ret);
	return 0;
}
#endif