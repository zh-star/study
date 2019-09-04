#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//题目：两两配对，差值最小
//给定一个长度为偶数的数组arr，将该数组中的数字两两配对并求和，在这些和中选出最大和最小值，请问该如何两两配对，才能让最大值和最小值的差值最小？

// 将数组先进行排序，再第一个和最后一个相加求和，之后再组成新的数组，进行排序，
//再让第一个最大值和最后一个最小值相减
//数组的排序都是从大到小
#define MAXN  100010
void Swap(int* p, int* q)//交换函数
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
void Func(int n, int arr[MAXN])//冒泡排序
{
	int i, j;
	for (i = 0; i<n - 1; i++)
	{
		for (j = 0; j<n - 1; j++)
		{
			if (arr[j]<arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
int main()
{
	int n = 4;
	scanf("%d", &n);
	int arr[MAXN];//原始数组
	int a[MAXN];//求和之后，存储和的数组
	int i = 0, j = 0;
	if (n % 2 == 0)
	{
		for (i = 0; i<n; i++)
		{
			scanf("%d", &arr[i]);
		}
	}
	Func(n, arr);//排序原数组
	for(i=0;i<n/2;i++)
	{
		a[i]=arr[i]+arr[n-1-i];//求和
	}
	Func(n,a);//排序和
	printf("%d\n",a[0]-a[n/2-1]);
	return 0;
}
#if 0
//获取n维数组的最大长度
int main()
{
	//字符串类型的数组，还是字符串，长得样子像数组
	char a[50000];
	int i = 0;
	gets(a);//输入字符串，和scanf区别，可以有空格
	int sz = strlen(a);
	int temp = 0;//用来记录深度
	int max = 0;//表示最大的深度
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '[')//中【的个数来计算深度
		{
			temp++;
			if (temp >= max)
			{
				max = temp;
			}
		}
		if (a[i] == ']')
		{
			temp--;
		}
	}
	printf("%d\n", max);
	return 0;
}

/*给定一个 n x n 矩阵，其中每行和每列元素均按升序排序，找到矩阵中第k小的元素。
 请注意，它是排序后的第k小元素，而不是第k个元素。*/
int main()
{
	int n = 3, i, j;
	//scanf("%d",&n);
	int a[3][3];
	for (i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif
#if 0
int main()
{
	//牛客网，由于数组的定义时的下表不能为变量，所以牛客网中，若要求输入下表时，可用scanf输入，
	//也可直接在定义数组时，赋予初始常量值，系统会自动进行替换鉴别
	但其它地方要用下表，那个大小值时，必须在定义变量初始化，例如这道题
	int n=5,i,j,k,temp;
	scanf("%d",&k);
	//scanf("%d",&n);//这句可省略
	int M[5*5];//矩阵当成一维数组，常量5，牛客网再调试时会自己进行替换
	for(i=0;i<n*n;i++)
	{
		scanf("%d",&M[i]);
	}
	for(i=1;i<n*n-1;i++)
	{
		for(j=i;j<n*n-1;j++)
		{
			if(M[j]<M[i])
			{
				temp=M[j];
				M[j]=M[i];
				M[i]=temp;
			}
		}
	}
	printf("%d", M[k - 1]);
}
#endif
#if 0
int main()
{
	int k,n;//k:第K小的元素    n:矩阵行，列数
	scanf("%d%d",&k,&n);
	int arr[3][3]={0};
	int i=0,j=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			printf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif
#if 0
int main()
{
	char a[21];
	int sz;
	scanf("%s",&a);
	sz = strlen(a);
	puts(a);
	return 0;
}
#endif
#if 0
int main()
{
	int n;//花的钱数
	scanf("%d",&n);
	int m=1024-n;//要找回的钱数
	int count=0;//硬币个数
	if(m!=64)
	{
		count=m/64;
		m=m%64;
		if(m!=16)
		{
			count=count+m/16;
			m=m%16;
			if(m!=4)
			{
				count=count+m/4;
				m= m % 4;
				count = count + m;
			}
			else{
			count=count+1;
			}
		}
		else{
		count=count+1;
		}
	}
	else
	{
		count = 1;
	}
	printf("%d",count);
	return 0;
}

#define NUM   n
int main()
{
	static int n;
	int count=0;
	scanf("%d",&n);
	int arr[n];//牛客网可以编译通过
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if (arr[i]>arr[i+1])
		{
			count++;
		}
	}
	if (count>1)
	{
		printf("0\n");
	}
	printf("1\n");
	return 0;
}

//有一个无限长的数字序列1，2，2，3，3，3，4，4，4，4，5，5，5，5，5。。。（数字序列从1开始递增，且数字k在该序列中正好出现k次），求第n项是多少
int main()
{
	int n, ret = 0;//n表示项数
	int i = 0;//要打印的数字
	scanf("%d", &n);
	while (n>ret)
	{
		i++;
		ret = i*i - ret;//找的规律
	}
	printf("%d\n", i);
	return 0;
}

int main(){
	int n;
	int k = 0;
	scanf("%d", &n);
	int i, j;
	for (i = 1; i<n; i++){
		for (j = 0; j<i/*&&k<n*/; j++){
			k++;
		}
		if (k >= n){
			break;
		}
	}
	printf("%d", i);
	return 0;
}

#endif