#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
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
#endif
int main(){
	int n;
	int k=0;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<n;i++){
		for(j=0;j<i/*&&k<n*/;j++){
			k++;
		}
		if(k>=n){
			break;
		}
	}
	printf("%d",i);
	return 0;
}
#if 0

//void malloc(size_t size)
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);	
//}
int main()
{
	char* str = NULL;
	int num = 100;
	char* p = (char*)malloc(num);
	//GetMemory(&str, 100);	
	str = p;
	strcpy(str, "hello");
	printf(str);
	free(str);
	return 0;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int* ptr = NULL;
	ptr = (int*)malloc(num*sizeof(int));//�����ڴ�
	if (ptr != NULL)//�ж��Ƿ������ڴ�ɹ��������Ҵ���ؿ���
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			*(ptr + i) = 0;
		}
	}
	free(ptr);//�ͷ��ڴ�
	ptr = NULL;//�ͷź��ÿգ���ֹ֮�����ã����Լ�ʱ����
	return 0;
}
#endif