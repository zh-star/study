#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*c语言编码，实现函数long htonl(long a)，将大端转换为小端
题目意思是：将大端数据0x12345678 转换为：0x78563412
*/
int main() {
	//char ch = 'w';
	//char *pc = &ch;
	//*pc = 'w';
	char *pstr = 'a';//这里是把一个字符串放到pstr指针变量里了吗？    
	printf("%s\n", *pstr);	
	/*float a = 3.5f;
	printf("%x\n",ch);*/
	return 0;
}
#if 0
 long htonl(long a) {
	 int i = 0;
	 int b = 0x00000000;
	 for (i = 0; i <32; i +=8) {
		 b = (b<<8) | ((a >> i) & 0xff);//1&任何数就等于任何数     0|任何数等于任何数     0^任何数等于任何数
	 }
	 return b;
}
int main() {
	//char a[] = "0x12345678";
	//char *p = &a;
	printf("%x\n", htonl(0x12345678));
	return 0;
}
#endif
