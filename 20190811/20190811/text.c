#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#if 0
/*有一个字符数组的内容为:"student a am i", 
请你将数组的内容改为"i am a student". 
要求： 
不能使用库函数。 
只能开辟有限个空间（空间个数和字符串的长度无关）。 */
void reserve(char *left,char *right) {

	while (left < right) {
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main() {
	char  a[] = "student a am i" ;
	char len = sizeof(a) / sizeof(a[0]);
	char  *p = a;
	char  *q = p;
	reserve(a, a+(len - 2));
	//p=p - 1;
	while ((*p != '\0' )&& (*q!='\0')) {
		if (*q == ' ') {
			reserve(p, q -1);
			q++;
			p=q;
		}
	   q++;
	}
	reserve(p, q- 1);//最后一位q为'\0'时，不能进入循环，最后一个单词也需要逆置
	printf("%s\n",a);
	return 0;
}



/*编程实现： 
一组数据中只有一个数字出现了一次。 
其他所有数字都是成对出现的。 
请找出这个数字。（使用位运算）*/
int main() {
	int a[7] = {2,5,3,7,5,3,2};
	int i = 0;
	int ret = 0;
	for (i = 0; i < 7; i++) {
		ret = ret ^a[i];//0与任何数异或都得任何数，一个数与自己异或得0
	}
	printf("%d\n",ret);
	return 0;
}

/*不使用（a+b）/2这种方式，求两个数的平均值。 
*/

int main() {
	int a = 2;
	int b = 3;
	int ret = ((a&b) << 1) + (a^b);//两个数相同的部分*2（相当于左移1位）+不相同的部分=两个数的和
	printf("%d\n",ret);
	return 0;
}


/*1.编写函数： 
unsigned int reverse_bit(unsigned int value); 
这个函数的返回值是value的二进制位模式从左到右翻转后的值。*/
unsigned int reverse_bit(unsigned int value) {
	int i=0;
	int ret=0;
	for (i = 0; i < 32; i++) {
		ret <<= 1;
		ret |= ((value >> i) & 1);//让一个数和1相与并右移，可找出二进制的每一位
		//ret = (ret << 1) | ((value >> i) & 1);这样也可以得到
	}
	return ret;
}
int main() {
	unsigned	int ret = reverse_bit(1);
	printf("%u\n",ret);//打印结果2147483648二进制1000（31个零）
	return 0;
}
#endif
