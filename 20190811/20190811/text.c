#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#if 0
/*��һ���ַ����������Ϊ:"student a am i", 
���㽫��������ݸ�Ϊ"i am a student". 
Ҫ�� 
����ʹ�ÿ⺯���� 
ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ��� */
void reserve(char *left,char *right)
{

	while (left < right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char  a[] = "student a am i" ;
	char len = sizeof(a) / sizeof(a[0]);
	char  *p = a;
	char  *q = p;
	reserve(a, a+(len - 2));
	//p=p - 1;
	while ((*p != '\0' )&& (*q!='\0'))
	{
		if (*q == ' ')
		{
			reserve(p, q -1);
			q++;
			p=q;
		}
	   q++;
	}
	reserve(p, q- 1);//���һλqΪ'\0'ʱ�����ܽ���ѭ�������һ������Ҳ��Ҫ����
	printf("%s\n",a);
	return 0;
}



/*���ʵ�֣� 
һ��������ֻ��һ�����ֳ�����һ�Ρ� 
�����������ֶ��ǳɶԳ��ֵġ� 
���ҳ�������֡���ʹ��λ���㣩*/
int main()
{
	int a[7] = {2,5,3,7,5,3,2};
	int i = 0;
	int ret = 0;
	for (i = 0; i < 7; i++)
	{
		ret = ret ^a[i];//0���κ�����򶼵��κ�����һ�������Լ�����0
	}
	printf("%d\n",ret);
	return 0;
}

/*��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 
*/

int main()
{
	int a = 2;
	int b = 3;
	int ret = ((a&b) << 1) + (a^b);//��������ͬ�Ĳ���*2���൱������1λ��+����ͬ�Ĳ���=�������ĺ�
	printf("%d\n",ret);
	return 0;
}


/*1.��д������ 
unsigned int reverse_bit(unsigned int value); 
��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��*/
unsigned int reverse_bit(unsigned int value)
{
	int i=0;
	int ret=0;
	for (i = 0; i < 32; i++)
	{
		ret <<= 1;
		ret |= ((value >> i) & 1);//��һ������1���벢���ƣ����ҳ������Ƶ�ÿһλ
		//ret = (ret << 1) | ((value >> i) & 1);����Ҳ���Եõ�
	}
	return ret;
}
int main()
{
	unsigned	int ret = reverse_bit(1);
	printf("%u\n",ret);//��ӡ���2147483648������1000��31���㣩
	return 0;
}
#endif