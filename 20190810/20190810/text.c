#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*在屏幕上打印杨辉三角。 
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 */
int main(){
	int i,j;
	int arr[5][5];
	for (i = 0; i < 5; i++) {
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (i = 2; i < 5; i++){
		for (j = 1; j < i; j++){
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < 5; i++){
		for (j = 0; j < 2 * (5 - i); j++) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}			
}
#if 0
/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个。 
嫌疑犯的一个。以下为4个嫌疑犯的供词。 
A说：不是我。 
B说：是C。 
C说：是D。 
D说：C在胡说 
已知3个人说了真话，1个人说的是假话。 
现在请根据这些信息，写一个程序来确定到底谁是凶手*/

int main() {
	int temp;
	for (temp = 'A'; temp <= 'D'; temp++) {
		if ((temp != 'A') + (temp == 'C') + (temp == 'D') + (temp != 'D') == 3) {
			printf("%c", temp);
		}
	}
	return 0;
}

/*5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
A选手说：B第二，我第三； 
B选手说：我第二，E第四； 
C选手说：我第一，D第二； 
D选手说：C最后，我第三； 
E选手说：我第四，A第一； 
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。*/


int main() {
	int a, b, c, d, e ;
	for (a = 1; a <= 5; a++) {
		for (b = 1; b <= 5; b++) {
			for (c = 1; c <= 5; c++) {
				for (d = 1; d <= 5; d++) {
					for (e = 1; e <= 5; e++) {
						if (((b != 2) && (a == 3)) || ((b == 2) && (a != 3))==1) {
							if (((b != 2) && (e == 4)) || ((b == 2) && (e != 4))==1) {
								if (((c != 1) && (d == 2)) || ((c == 1) && (d != 2))==1) {
									if (((c != 5) && (d == 3)) || ((c == 5) && (d != 3))==1) {
										if (((e != 4) && (a == 1) )|| ((e == 4) && (a != 1))==1) {
											if ((a != b) && (a != c) && (a != d) && (a != e) && (b != c) && (b != d) && (b != e) && (c != d) && (c != e) && (d != e)) {
												printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);

											}
										}
									}
								}
							}
						}
					}
				}
			}

		}
	}
	return 0;
}

/*1. 
写一个函数返回参数二进制中 1 的个数
比如： 15 0000 1111 4 个 1
程序原型：
int count_one_bits(unsigned int value)
{
	// 返回 1的位数 
}*/
int count_one_bits(unsigned int value) {
	int i = 0;
	int count=0;
	/*while (value != 0) {
		count++;
		value = value&(value - 1);//三种方法
	}
	return count;*/
	/*while (value != 0) {
		if (value%2==1) {
			count++;	
		}
		value = value / 2;
	}
	return count;*/
	/*for (i = 0; i < 32; i ++ ) {
		if ((value&1) != 0) {
			count++;
		}
		value=value >> 1;
	}
	return count;*/
	while (value != 0) {
		if ((value & 1) != 0) {
			count++;
		}
		value = value >> 1;
	}
	return count;
}
int main() {
	printf("%d\n", count_one_bits(15));
	return 0;
}
/*2.获取一个数二进制序列中所有的偶数位和奇数位， 
分别输出二进制序列。先右移31位剩第一位，开始进行与1得到*/
void fucn(int n) {
	int i;
	printf("偶数位：");
	for (i = 31; i >= 1; i -= 2){//每次移动之前的两位
		printf("%d",(n>>i)&1);
	}
	printf("奇数位：");
	for (i = 30; i >=1; i -= 2) {
		printf("%d", (n>>i)& 1);
	}
}
int main() {
	fucn(42);
	return 0;
}

//输出一个整数的每一位。 
void  func1(int n) {
	if (n>9) {	
		func1(n/10);
	}
	printf("%d ", n%10);

}
/*void  func(int n) {
	while (n > 9) {
			printf("%d ",n%10);
			n = n / 10;
		}
	printf("%d ",n);
}*///结果 3 6 7 1
int main() {
	func(1763);
	return 0;
}

/*编程实现： 
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
输入例子: 
1999 2299 
输出例子:7 */
int func(int temp) {
	int count=0;
	while (temp != 0) {
		temp= temp&(temp-1);//求一个整数二进制1的个数
		count++;
	}
	return count;
}
int main() {
	int m, n,temp;
	printf("请输入两个整数：");
	scanf("%d%d",&m,&n);
	temp = m^n;//两个数按位异或之后得到的就是它们二进制不用的地方
	printf("%d\n",func(temp));
	return 0;
}
#endif
