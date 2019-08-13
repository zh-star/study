#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("******************\n");
	printf("****1.play********\n");
	printf("****0.exit*********\n");
	printf("******************\n");
}
void game()
{
	char mine[ROWS][CLOS] = { 0 };   //存放雷
	char mineInfo[ROWS][CLOS] = {0};    //排查雷

	InitBoard(mine, ROWS, CLOS, '0');//存放雷的矩阵   1代表雷
	InitBoard(mineInfo, ROWS, CLOS, '*');//玩家用的矩阵
	ShowBoard(mineInfo, ROW, CLO);//打印矩阵

	SetMine(mine, ROW, CLO);//设置雷
	//ShowBoard(mine, ROW, CLO);
	FindMine(mine, mineInfo, ROW, CLO);//玩家找雷
}
int main()
{
	int input=0;	
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入您的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}