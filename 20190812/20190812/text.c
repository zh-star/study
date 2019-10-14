#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
/*判断一个字符串是否为另外一个字符串旋转之后的字符串。 
例如：给定s1 =AABCD和s2 = BCDAA，返回1 
给定s1=abcd和s2=ACBD，返回0. 

AABCD左旋一个字符得到ABCDA 
AABCD左旋两个字符得到BCDAA 

AABCD右旋一个字符得到DAABC 

*/
int  func(char *p,char *q) {
 	strncat(p, p, strlen(p));
	if (strstr(p, q) == NULL) {
		return 0;
	} else {
		return 1;
	}
}
int main() {
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	/*char a2[] = "abcd";
	char *q = "ACBD";*/
	printf("%d\n", func(s1, s2));	
	return 0;
}
#if 0
/*1.实现一个函数，可以左旋字符串中的k个字符。 
ABCD左旋一个字符得到BCDA 
ABCD左旋两个字符得到CDAB
例：   k=2,       字符串：abcdef
先让ab 交换得到bacdef         再让cdef交换得到bafedc,    再让bafedc 交换就得到cdefab
解析：写一个单独的交换函数，分别设置交换函数的中数组的左右值，交换k前的字符串，在交换k后的字符串，之后在总体交换*/
void swap(char a[],int left,int right) {
	int ret = 0;
	while (left < right) {
		ret = a[left];
		a[left] = a[right];
		a[right] = ret;
		left++;
		right--;
	}
}
void leftswap(char a[],int k,int len) {
	int left = 0;
	int right =k-1;
	swap(a, left, right);//将需要的左k位转换
	left = k;
	right = len - 2;
	swap(a, left, right);//将剩余的转换
	left = 0;
	right = len - 2;
	swap(a,left, right);//全部进行转换
}
int main() {
	char a[] = "abcdef";
	int len = sizeof(a) / sizeof(a[0]);
	int k = 3;	
	leftswap(a,k, len);
	printf("%s\n", a);
	return 0;
}
/*杨氏矩阵 
有一个二维数组. 
数组的每行从左到右是递增的，每列从上到下是递增的. 
在这样的数组中查找一个数字是否存在。 
时间复杂度小于O(N); */

void find(int arr[][3], int *row, int *col, int key) {
	int x = 0;
	int y = *col - 1;
	while (x <*row&&y>0)//判断条件 {
		if (arr[x][y] == key)//找到 {
			*row = x;
			*col = y;
			return;
		} else if (arr[x][y] < key) {
			x++;//变换行
		} else {
			y--;//变换列
		}
	}
	*row = -1;
	*col = -1;
}
int main() {
	int arr[3][3]= {1,2,3,4,5,6,7,8,9};
	int x=3;
	int y=3;
	int *row = &x;
	int *col = &y;
	int key=5;
	find(arr,row,col,key);
	if (*row == -1 && *col == -1) {
		printf("没找到\n");
	} else {
		printf("找到了，下标为 %d,%d\n", *row, *col);
	}
	system("pause");
	return 0;
}

/*1.调整数组使奇数全部都位于偶数前面*/
void func1(int a[],int len) {
	int left = 0;
	int right = len - 1;
	int temp = 0;
	while (left < right) {
		if (a[left] % 2 == 1) {
			left++;
		} else if (a[right] % 2 == 0) {
			right--;
		} else {
			temp = a[left];
			a[left] = a[right];
			a[right] = temp;
		}
	}
}
void print(int a[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main() {
	int a[] = { 1, 2, 4, 3, 5, 11, 7, 8, 15, 9, 6 };
	int len = sizeof(a) / sizeof(a[0]);
	func1(a, len);
	print(a, len);
	return 0;
}
#endif
