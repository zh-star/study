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
	initboard(arr, 3, 3);//将数组清为空格
	ShowBoard(arr, 3, 3);//打印棋盘
	while (1)
	{
			PlayerMove(arr, 3, 3);
			ret = iswin(arr, 3, 3);
			if (ret != ' ')
			{
				break;//玩家胜出或者平局
			}
			ShowBoard(arr, 3, 3);
			ComputerMove(arr, 3, 3);
			ret = iswin(arr, 3, 3);
			if (ret != ' ')
			{
				break;//电脑胜出或者平局
			}
			ShowBoard(arr, 3, 3);		
	}
	if (ret == 'Q')
	{
			printf("平局\n");
	}
	else if (ret == 'X')
	{
		   printf("玩家胜出\n");
	}
	else if (ret == 'O')
	{
		  printf("电脑胜出\n");
	}
}
int main()
{
	int input=0;//定义一个整形的输入
	srand((unsigned int)time(NULL));
	do
	{
		manu();
		printf("请输入您的操作：");
		scanf("%d",&input);
		switch(input)
		{
		    case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("请输入正确的数字：");
				break;
		}
	} while (input);
	return 0;
}