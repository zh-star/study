#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[21];
	int sz;
	scanf("%s",&a);
	sz = strlen(a);
	puts(a);
	return 0;
}
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