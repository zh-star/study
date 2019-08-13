#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[][CLOS], int rows, int cols, char set)
{
	int i=0;
	int j=0;
	//printf("===================\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}//memset(board,set,rows*cols*sizeof(char));
}
void ShowBoard(char board[][CLOS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char mine[][CLOS], int row, int col)
{
	int x;
	int y;
	int count = 0;
	while (count <MINE_NUM)
	{
		x = rand() % row+1;//{1,10)
		y = rand() % col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count++;
		}
	}
}
static int  GetMineCount(char mine[][CLOS], int  x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y + 1] + mine[x + 1][y + 1] + mine[x + 1][y] + mine[x + 1][y - 1] + mine[x][y - 1] - 8 * '0';
		//�����ַ�--����������
}
void FindMine(char mine[][CLOS], char mineInfo[][CLOS], int row, int col)
{
	int count = 0;
	int x = 0;
	int y = 0;
	while (count <row*col-MINE_NUM)
	{
		printf("���������� ");
		scanf("%d%d",&x,&y);
		if (x>=1&&x<=9&&y>=1&&y<=9)
		{
			if(mine[x][y] == '1')
			{
				printf("����ը����\n");
				break;
		    }
			else//ͳ�Ƶ�ǰλ���׵ĸ���
			{
				int ret = GetMineCount(mine,x,y);
				mineInfo[x][y] = ret + '0';
				ShowBoard(mineInfo,row,col);
				count++;
			}
		}
		else
		{
			printf("���겻�Ϸ�");
		}
	}
}