#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#if 0
/*1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大） */
void Printf(char a[]) {
	int i = 0;
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}

}
void ShuzuSwap() {
	char a[5] = { 1, 2, 3, 4, 5 };
	char b[5] = { 6, 7, 8, 9, 10 };
	int i = 0;
	int temp;
	for (i = 0; i < 5; i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	Printf(a);
	printf("\n");
	Printf(b);
	printf("\n");

}

/*2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。 */
void func1() {
	int i = 0;
	int temp = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++) {
		sum = sum + temp*(1.0 / i);
		temp = temp*(-1);
	}
	printf("%lf\n", sum);
}

/*3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。 */
void func2() {
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			count++;
		} else if (i / 10 == 9) {
			count++;
		}
	}
	printf("%d\n", count);
}

/*.在屏幕上输出以下图案*/
void func3() {
	int i = 0, j = 0;
	for (i = 1; i <=7; i++) {
		for (j = 1; j <= 7 - i; j++) {
			printf(" ");
		}
		for (j = 1; j <=2*i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 6; i >=1; i--) {
		for (j = 1; j <= 7 - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
	
		printf("\n");
	}
}

/*2.求出0～999之间的所有“水仙花数”并输出。 
“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153 = 1^3 + 5^3 + 3^3，则153是一个“水仙花数”。 */

void func4() {
	int i = 0;
	for (i = 0; i < 1000000; i++) {
		int count = 1;
		int temp = i;
		int  sum=0;
		while (temp / 10) {
			count++;
			temp /= 10;
		}
		temp = i;//计算每个数的每一位的位数次方和之前先要将原来的值赋回来，上面计算位数时，对它进行了改变
		while (temp) {
			sum += pow(temp % 10, count);
			temp /= 10;
		}
		if (i == sum) {
			printf("%d ",i);
		}
	}
}

/*求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222  */
void func5() {
	int a = 2;
	int n = 5;
	int i = 0;
	int sum = 0;
	int temp = 0;
	for (i = 0; i < n; i++) {
		temp = temp+a*pow(10, i);//i=0,sum=2;i=1,sum=22,
		sum = sum + temp;
		printf("%d ", temp);//打印的每一位：2  22 222 2222
	}
	printf("%d\n", sum);
}

int main() {
	func5();
	//func4();
	//func3();
	//func2();
	//func1();
	//ShuzuSwap();

	return 0;
}

/*1.完成猜数字游戏。*/
void game() {
	int rand_num = rand() % 100 + 1;//rand()%100生成[0,99）的随机数 头文件：stdlib.h   若要生成[0，10)的随机数：rand()%10
	int input = 0;
	while (1) {
		printf("请输入您要猜的数字：\n");
		scanf("%d", &input);
		if (input > rand_num) {
			printf("您猜大了！\n");
		} else if (input < rand_num) {
			printf("您猜小了！\n");		
		} else {
			printf("您猜对了！\n");
			break;
		}
	}
}
int main() {
	int input = 0;
	srand((unsigned)time(NULL));
	printf("请输入您的选择：\n");
	scanf("%d", &input);
	switch(input) {
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
				printf("游戏退出\n");
		default:
			printf("您的输入有误\n");
			break;
	}
	return 0;
}
#endif
int main() {
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1, c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}
