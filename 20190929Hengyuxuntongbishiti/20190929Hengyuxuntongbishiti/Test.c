#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#if 0
int main() {
	int ret = (int)((double)9 / 2) - 9 % 2;
	int ret1 = ((double)9 / 2);
	printf("%lf", ret1);
	printf("%d", ret);
}

int main() {
	int x = 10;
	x = x + x;
	printf("%d", x);
}

int main() {
	int c = 0, k;
	for (k = 1; k < 3; k++){
		switch(k) {
			default:
				c += k;//c=1
			case 2:
				c++;
				break;//c=2;c=3
			case 4:
				c+=2;
				break;
		}
	}
	printf("%d\n", c);
}

int main(){
	int n = 2, k = 0;
	while (k++&&n++ > 2);//k=1,(逻辑与，左边为真，则右边不执行)
	printf("%d,%d\n", k, n);
}

int main(){
	int m = 1, n = 2, *p = &m, *q = &n, *r;
	r = p;
	p = q;
	q = r;
	printf("%d,%d,%d,%d\n", m, n, *p, *q);
}

int main(){
	char str[][12] = { "One*World", "One*Dream!" }, *p = str[1];
	char a[10] = "abcd";
	printf("\n");
	printf("%d,%d,%S", strlen(a), sizeof(a), p);//4,10,
}
#endif
//为了增加灵活性如支持链式表达，可以附加返回值。
char* Strcpy(char* strDest, const char* strSrc){
	if (strDest == NULL || strSrc == NULL){
		return strDest;
	}
	int i = 0;
	for (i = 0; strSrc[i] !='\0'; ++i){
		strDest[i] = strSrc[i];
	}
	strDest[i] = strSrc[i];
	return strDest;
}
int main(){
	char a[] = "1bcd2dgewtaygt";
	char b[] = "abcdefedf";
	//strcpy(a, b);
	char* ret = Strcpy(a, b);
	printf("%s\n", a);
	printf("%s\n", ret);
	return 0;
}





