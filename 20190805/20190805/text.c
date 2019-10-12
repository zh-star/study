#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
#include  <string.h>//strlen的头文件，求一个字符串的长度
//#include  <windows.h>
#include <stdlib.h>//随机数头文件rand
#include <math.h>
//编写一个程序，可以一直接收键盘字符， 如果是小写字符就输出对应的大写字符， 
//如果接收的是大写字符，就输出对应的小写字符， 
//如果是数字不输出。 
//123ABCD45efG ==> abcdEFg 
int main() {
	char a;	
	while (1) {
		scanf("%c", &a);
		if (a >= 'A'&&a <= 'Z') {
			printf("%c\n", a + 32);
		}
		else if(a >= 'a'&&a <= 'z') {
			printf("%c",a-32);
		} else {
			return;
		}
	}
	return 0;
}
#if 0
//2.写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回 - 1.（折半查找)
int binarySearch(int arr[], int len, int key) {
	int i;
	int left = 0, right = len - 1;
	for (; left <= right;) {//可以写成while循环 
		int mid = (left + right) / 2;
		if (key >arr[mid]) {
			left = mid + 1;

		}
		else if (key<arr[mid]) {
			right = mid - 1;
		} else {
			return mid;
		}
	}
	return -1;
}
int main() {
	int arr[10] = { 2, 5, 7, 8, 9, 10, 24, 27, 29, 41 };
	int len = sizeof(arr) / sizeof(arr[0]);//计算数组的长度，sizeof()计算所占字节数，用数组总共占得的字节数除以数组中一个元素所占的字节数等于数组的长度
	//printf("%d ", len);
	int ret = binarySearch(arr, len, 27);
	printf("%d ", ret);
	return 0;
}

//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
int main() {
	int count = 3;
	while(count !=0) {
		char a[7] = { 0 };//0 '0' '\0' NULL
		scanf("%s",a);
		if(strcmp(a,"666666") == 0) {//strcmp函数：字符串比较，若相等返回0，若大于返回正数，若小于，返回负数		
			printf("登录成功\n");
			break;
		}
		count--;
		printf("您还有%d次机会\n",count);
	}
	return 0;
}

//求出0～999999之间的所有“水仙花数”并输出。“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身， 如；153＝1 ^ 3＋5 ^ 3＋3 ^ 3 ? ，则153是一个“水仙花数”。
int main() {
	int i = 0;
	for (i = 0; i < 1000000; i++) {
		int count = 1;
		int tmp = i;//11
		int sum = 0;
		//计算几位数
		while (tmp / 10) {//10 11		
			count++;//2
			tmp /= 10;//1
		}
		//计算每位数的次方和
		tmp = i;//10
		while (tmp){
			sum +=pow(tmp % 10, count);//pow(a,b)函数计算a的b次方的值，头文件 math.h
			tmp = tmp / 10;
		}
		//比较
		if (i == sum)
			printf("%d ", i);
	}
	system("pause");
	return 0;
}

//求Sn=a+aa+aaa+aaaa+aaaaa的前n项之和，其中a是一个数字， 
//例如：2 + 22 + 222 + 2222 + 22222
//分析：和阶乘相似
int main() {
	int i,a,set=0;
	int sum=0;
	printf("请输入数字：");
	scanf("%d",&a);
	for (i = 0; i <= a-1; i++) {
		sum = sum + a*pow(10, i);//11=10+1；111=100+11；pow求次方的函数
		set += sum;
		printf("%d \n",sum);
	}
	printf("%d ", set);
	return 0;
}
//猜数字游戏

void game() {
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1) {
		printf("请输入您猜的数字：");
		scanf("%d",&input);
		if (input > random_num) {
			printf("猜大了\n");
		} else if (input < random_num) {
			printf("猜小了\n");
		} else {
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main() {
	int input;
	srand((unsigned)time(NULL));// 
	printf("请选择（1代表进入游戏；0代表退出）:");
	scanf("%d",&input);
	switch (input) {
	case 1:
		printf("开始游戏\n");
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("您输入有误\n");
		break;
	}
	return 0;
}

//显示图案
int main() {
	int n;
	int i = 0,j=0;
	printf("请输入您需要的行数：");
	scanf("%d",&n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {//每行要打印7-i个空格
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1;j++) {			
			printf("*");
		}
		printf("\n");
	}
	for (i = n-1; i >= 1; i--) { //行数逐渐减小，则打印*不用变，只需要改变空格					
		for (j = 1; j <= n -i; j++) {//空格数量从一个逐渐增加		
			printf(" ");
		}
		for (j = 1; j <= 2*i-1;j++) {
			printf("*");
		}				
		printf("\n");
	}
	return 0;
}

int main() {
	int count = 3;
	char a[7] = {0};
	printf("请输入密码：");
	scanf("%s\n",a);
	if (strcmp(a, "123456") == 0) {
		printf("登陆成功！");
	} else {
		count--;
		printf("密码错误，您还有%d次输入机会\n",count);
	}	
	return 0;
}

int binarySearch(int arr[], int len, int key) {
	int i;
	int left = 0,right=len-1;	
	for ( ; left<=right; ) {//可以写成while循环
		int mid = (left+right) / 2;
		if (key >arr[mid]) {
			left = mid + 1;
			
		} else if (key<arr[mid]){
			right = mid - 1;
		} else {
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = {2,5,7,8,9,10,24,27,29,41};
	int len = sizeof(arr)/sizeof(arr[0]);//计算数组的长度，sizeof()计算所占字节数，用数组总共占得的字节数除以数组中一个元素所占的字节数等于数组的长度
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
	int right = strlen(str1)-1;//求一个字符串的长度，头文件为string.h
	for (left = 0; left <= right;left++)
	{
		Sleep(100);//延时，头文件为windows.h
		str2[left] = str1[left];
		str2[right] = str1[right];//只用将2数组换成1数组，不用将1换成2
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
//阶乘
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
		printf("%d ", ret);//每个阶乘
	}
	printf("%d ", ret);//n的阶乘
	//sum = sum + ret;
	//}
	printf("%d", sum);//n的阶乘之和
#endif
	for (i = 1; i <= 3; i++)
	{
		ret *= i;//一个数的阶乘=前一个数的阶乘*这个数
	}
	printf("%d", ret);
	return 0;
}
#endif
