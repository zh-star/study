#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	long long  a[] = { 0 };
	int i = 0;
	int n = 5;//ÐèÒª¼¸¸öÊý×Ö
	int m = 3;
	int count = 0;
	long long  ret = 0;
	//scanf("%d%d", &m,&n);
	//scanf("%d", &n);	
	for (i = 0; i<n; i++) {
		a[i] = ret * 10 + (i + 1);
		ret = a[i];
		//printf("%d\n",a[i]);
		while (i>=m-1&&i<n) {
			if (ret % 3 == 0) {
				count++;
				break;
			}
			break;
		}
	}
	printf("%d\n", count);
	return 0;
}
