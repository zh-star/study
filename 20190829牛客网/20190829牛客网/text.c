#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Input(int n, int*p)
{
	int i = 0;
	if (n % 2 == 0)
	{
		for (i = 0; i<n; i++)
		{
			scanf("%d", *p);
			++p;
		}
	}
}
void Swap(int* p,int* q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{
	int n=6;
	scanf("%d",&n);
	int arr[100010]={0};
	int i=0,j=0;
	int sum_max=0;
	int sum_min=0;
	Input(n, &arr);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				Swap(&arr[j],&arr[j+1]);
			}
		}
	}
	sum_max=arr[0]+arr[n-1];
	sum_min=arr[n/2-1]+arr[n/2];
	printf("%d\n",sum_max-sum_min);
	return 0;
}
#if 0
//��ȡnά�������󳤶�
int main()
{
	//�ַ������͵����飬�����ַ�������������������
	char a[50000];
	int i = 0;
	gets(a);//�����ַ�������scanf���𣬿����пո�
	int sz = strlen(a);
	int temp = 0;//������¼���
	int max = 0;//��ʾ�������
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '[')//�С��ĸ������������
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

/*����һ�� n x n ��������ÿ�к�ÿ��Ԫ�ؾ������������ҵ������е�kС��Ԫ�ء�
 ��ע�⣬���������ĵ�kСԪ�أ������ǵ�k��Ԫ�ء�*/
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
	//ţ��������������Ķ���ʱ���±���Ϊ����������ţ�����У���Ҫ�������±�ʱ������scanf���룬
	//Ҳ��ֱ���ڶ�������ʱ�������ʼ����ֵ��ϵͳ���Զ������滻����
	�������ط�Ҫ���±��Ǹ���Сֵʱ�������ڶ��������ʼ�������������
	int n=5,i,j,k,temp;
	scanf("%d",&k);
	//scanf("%d",&n);//����ʡ��
	int M[5*5];//���󵱳�һά���飬����5��ţ�����ٵ���ʱ���Լ������滻
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
	int k,n;//k:��KС��Ԫ��    n:�����У�����
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
	int n;//����Ǯ��
	scanf("%d",&n);
	int m=1024-n;//Ҫ�һص�Ǯ��
	int count=0;//Ӳ�Ҹ���
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
	int arr[n];//ţ�������Ա���ͨ��
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

//��һ�����޳�����������1��2��2��3��3��3��4��4��4��4��5��5��5��5��5���������������д�1��ʼ������������k�ڸ����������ó���k�Σ������n���Ƕ���
int main()
{
	int n, ret = 0;//n��ʾ����
	int i = 0;//Ҫ��ӡ������
	scanf("%d", &n);
	while (n>ret)
	{
		i++;
		ret = i*i - ret;//�ҵĹ���
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