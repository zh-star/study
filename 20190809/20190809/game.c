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
	//msmset(arr,' ',row*col*sizeof(char))Ҳ���������պ��������鶼��ʼ��Ϊ�ո�
}
void ShowBoard(char arr[][3], int row, int col)
{
	int i;
	for (i = 0; i <row; i++)//��Ҫ����
	{
		printf("| %c | %c | %c |\n",arr[i][0],arr[i][1],arr[i][2]);//һ��һ�д�ӡ��������һ��һ������ �����ո� ��һ������ �������ո�
		if (i !=row - 1)//�ڶ���  �ܹ���Ҫ����
		{
			printf("|---|---|---|\n");
		}
	}
}
//��һ�ַ�����ӡ����
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
		printf("������1-3����������\n");
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
				printf("��λ�ñ�ռ��\n");
			}
		}	
		else
		{
			printf("���겻�Ϸ�\n");
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
				return 0;//û����
			}
	   }
   }
	return 1;//����
}
char iswin(char arr[][3], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[0][1] != ' ')//��
		{
			return arr[i][0];
	    }
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')//��
		{
			return  arr[0][i];
		}
		if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')//��б
		{
			return  arr[0][0];
		}
		if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != ' ')//��б
		{
			return  arr[0][2];
		}
		if (IsFull(arr, 3, 3)==1)
		{
			return 'Q';
		}
	}
	return ' ';   //û��ӮҲû����
}
void ComputerMove(char arr[][3], int row, int col)
{
	int x ,y;
	printf("�����ƶ�\n");
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
