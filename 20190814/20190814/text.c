#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0]+1));
	printf("%d\n", sizeof(*(a[0]+1)));
	printf("%d\n", sizeof(a+1));
	printf("%d\n", sizeof(*(a+1)));
	printf("%d\n", sizeof(&a[0]+1));
	printf("%d\n", sizeof(*(&a[0]+1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));



	/*int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);*/
	/*int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = (int *)(&aa + 1);
	int* ptr2 = (int*)(*(aa+1));
	printf("%d,%d",*(ptr1-1),*(ptr2-1));*/

	/*int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%p,%d\n", &p[4][2], &a[4][2], & p[4][2] - &a[4][2]);*/

	/*int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int *)(&a + 1);
	int* ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr1[-1],*ptr2);*/

	//int*   arr[5] = {0};
	//char *p, *q;
	//int a, b;
	//p = (char*)malloc(sizeof(char)* 20);
	//q = p;
	//scanf("a = %f, b = %d", &a, &b);
	//scanf("%s %s", p, q);//����abc def
	//printf("%s %s\n", p, q);//��� def def///��Ϊmalloc�����ǿ����ڴ沢����ַ������p,q=p,����ָ��ͬһ���ַ��abc ����p,�ٽ�def����q,������ԭ����
	//char a[] = {'a','b','c','d','e','f'};
	//printf("%d\n",sizeof(a));
	//printf("%d\n", sizeof(a+0));
	//printf("%d\n", sizeof(*a));
	////printf("%d\n", sizeof(a+1));
	//printf("%d\n", sizeof(a[1]));
	//printf("%d\n", sizeof(&a));
	////printf("%d\n", sizeof(*&a));
	//printf("%d\n", sizeof(&a+1));
	////printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0]+1));




	
	/*printf("%d\n", strlen(a));
	printf("%d\n", strlen(a+0));
	printf("%d\n", strlen(*a));
	printf("%d\n", strlen(a[1]));
	printf("%d\n", strlen(&a));
	printf("%d\n", strlen(&a+1));
	printf("%d\n", strlen(&a[0]+1));*/

	return 0;
}