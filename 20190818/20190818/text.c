#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
/*1. 打印100~200 之间的素数     素数：不能被1或它本身除外的任何数字整除 */

void Prime() {
	int i = 0;
	int j = 0;
	printf("素数有：");
	for (i = 100; i <= 200; i++) {
		for (j = 2; j < i; j++) {
			if (i%j == 0) {
				break;
			} else {
				printf("%d  ", i);
				break;
			}	
		}	
	}
}

/*2. 输出乘法口诀表 */
void Mul() {
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)//行 {
		for (j = 1; j <= i; j++)//列 {
			printf("%d*%d=%d  ", j, i, j*i);
		}
		printf("\n");
	}
}

/*3. 判断1000年---2000年之间的闰年 ，闰年：能被4整除且不能被100整除，和能被400整除*/
void  Leap() {
	int i = 0;
	printf("闰年有：");
	for (i = 1000; i <= 2000; i++) {
		if ((i % 4 == 0 && i % 100  !=0 )|| i % 400 == 0) {
			printf("%d  ",i);
		}
	}
}

/*2.1. 给定两个整形变量的值，将两个值的内容进行交换。*/
void swap(int* p,int* q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}

/*2. 不允许创建临时变量，交换两个数的内容（附加题） */
void swap1(int* p, int*q) {
	*p = *p ^ *q;	
	*q = *p ^*q;
	*p = *p ^ *q;
	/**p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;*/
}

/*3.求10 个整数中最大值。 */
int Max(int  arr[10]) {
	int i = 0;
	int j = 0;
	int max = 0;
	int sex = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for (i = 1; i < 10; i++) {
		if (max<arr[i ]) {
			//sex = max;//求次大值时可加这句，sex返回的为次大值
			max = arr[i];
		}
	}
	/*for (i = 0; i < 10; i++)//冒泡方法 {	
		for (j = 0; j < 10; j++) {	
			if (arr[j] < arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}	
	    }
	}*/
	return max;
}

/*将三个数按从大到小输出。*/
void swap(int* p, int* q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}
void SumberSort() {
	int arr[3] = { 0 };
	int i = 0, j = 0;
	printf("请输入要排序的三个数字：");
	for (i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (arr[j]<arr[j+1]) {
				swap(&arr[j], &arr[j + 1]);			
			}
		}
	}
	for (i = 0; i < 3; i++)//打印数组要用循环遍历 {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
#endif
/*求两个数的最大公约数。   最大公约数：遍历从1到较小的那个数之间的所有数字，同时满足余数为0的时候，除数就是所有的公约数，再去得到最大公约数*/
void MaxGongYueShu() {
	int a=0, b=0;
	int i, temp;
	int ret;//最大公约数
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	 temp = a < b ? a : b;
	for (i = 1; i <=temp; i++) {
		if (a%i== 0 && b%i == 0) {
			ret = i;
		}
	}
	printf("最大公约数为：%d\n", ret);
}
int main() {
	MaxGongYueShu();
	//SumberSort();
	/*int arr[10] = { 0 };
	printf("请输入需要比较的10个数字：");
	int ret=Max(arr);
	printf("%d\n",ret);*/
	/*int a = 3;
	int b = 4;
	//swap(&a, &b);
	swap1(&a, &b);
	printf("%d  %d\n", a, b);*/
	//Leap();
	//Mul();
	//Prime();
	return 0;
}
