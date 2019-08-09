#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void initboard(char arr[][3],int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
	//msmset(arr,' ',row*col*sizeof(char))也可用这个清空函数将数组都初始化为空格
}
void ShowBoard(char arr[][3], int row, int col)
{
	int i;
	for (i = 0; i <row; i++)//需要三行
	{
		printf("| %c | %c | %c |\n",arr[i][0],arr[i][1],arr[i][2]);//一行一行打印，，，第一行一条竖线 三个空格 再一条竖线 在三个空格
		if (i !=row - 1)//第二行  总共需要两行
		{
			printf("|---|---|---|\n");
		}
	}
}
//另一种方法打印棋盘
/*void ShowBoard(char arr[][3], int row, int col)
{
	int i,j;
	for (i = 0; i <row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col;j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}*/
void PlayerMove(char arr[][3], int row, int col)
{
	int x, y;
	while (1)
	{
		printf("请输入1-3的数字坐标\n");
		scanf("%d%d",&x,&y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (arr[x - 1][y - 1]==' ')
			{
				arr[x-1][y-1] = 'X';
				break;
			}
			else
			{
				printf("此位置被占了\n");
			}
		}	
		else
		{
			printf("坐标不合法\n");
		}
	}
}
static int IsFull(char arr[][3], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;//没有满
			}
	   }
   }
	return 1;//满了
}
char iswin(char arr[][3], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[0][1] != ' ')//行
		{
			return arr[i][0];
	    }
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')//列
		{
			return  arr[0][i];
		}
		if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')//右斜
		{
			return  arr[0][0];
		}
		if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != ' ')//左斜
		{
			return  arr[0][2];
		}
		if (IsFull(arr, 3, 3)==1)
		{
			return 'Q';
		}
	}
	return ' ';   //没有赢也没有输
}
void ComputerMove(char arr[][3], int row, int col)
{
	int x ,y;
	printf("电脑移动\n");
	while (1)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = 'O';
				break;
			}
	}			
}
