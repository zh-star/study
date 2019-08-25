#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct S1 {
	char c1;  //1
	int i;    //4+3
	char c2; //1+3
}; //12
struct S2 { 
	char c1;    //1
	char c2;    //1
	int i; //4+2
};//8
struct S3 { 
	double d;   //8
	char c;   //1
	int i; //4+3
};//16
struct S4{ 
	char c1;    //1
	struct S3 s3;    //16+7
	double d; //8
}; //32
int main()
{
	printf("%d\n", sizeof(struct S4));
	//printf("%d\n", sizeof(struct S3));
	printf("%d\n", sizeof(struct S2));
	//printf("%d\n", sizeof(struct S1));
	return 0;
}
#if 0
/*ʵ��memmove */
void * Memmove(void *dest, const void *src, size_t num)
{
	//�Ϸ���У��
	if (dest == NULL || src == NULL || num == 0)
	{
		return dest;
	}
	//�����ֵ�ǰ�������Ƿ��ص�
	char* pdest = (char*)dest;
	char* psrc = (char*)src;
	if (pdest >= psrc&&pdest <= psrc + num)
	{
		//�������ص����Ӻ���ǰ����
		for (size_t i = 0; i < num; ++i)
		{
			pdest = pdest + num-1;
			psrc = psrc + num-1;
			*pdest = *psrc;
			--pdest;
			--psrc;
		}
	}
	else
	{
		//���������ص�����������
		for (size_t i = 0; i < num; ++i)
		{
			*pdest = *psrc;
			++pdest;
			++psrc;
		}
	}
	return dest;
}
int main()
{
	char  arr1[] = "a";
	char arr2[] = "memove can be very useful.......";
    Memmove(arr1, arr2, sizeof(arr2));
	//int i = 0;
	//for (i = 0; i < 4; i++)
	//{
	//	printf("%d ", arr1[i]);
	//}
	//printf("\n");
	puts(arr1);
	return 0;
}
#endif