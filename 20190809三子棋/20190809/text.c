#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void manu()
{
	printf("*******************\n");
	printf("******1.play*******\n");
	printf("******0.exit********\n");
	printf("*******************\n");
}
void game()
{
	char ret;
	char  arr[3][3] = {0};
	initboard(arr, 3, 3);//��������Ϊ�ո�
	ShowBoard(arr, 3, 3);//��ӡ����
	while (1)
	{
			PlayerMove(arr, 3, 3);
			ret = iswin(arr, 3, 3);
			if (ret != ' ')
			{
				break;//���ʤ������ƽ��
			}
			ShowBoard(arr, 3, 3);
			ComputerMove(arr, 3, 3);
			ret = iswin(arr, 3, 3);
			if (ret != ' ')
			{
				break;//����ʤ������ƽ��
			}
			ShowBoard(arr, 3, 3);		
	}
	if (ret == 'Q')
	{
			printf("ƽ��\n");
	}
	else if (ret == 'X')
	{
		   printf("���ʤ��\n");
	}
	else if (ret == 'O')
	{
		  printf("����ʤ��\n");
	}
}
int main()
{
	int input=0;//����һ�����ε�����
	srand((unsigned int)time(NULL));
	do
	{
		manu();
		printf("���������Ĳ�����");
		scanf("%d",&input);
		switch(input)
		{
		    case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("��������ȷ�����֣�");
				break;
		}
	} while (input);
	return 0;
}