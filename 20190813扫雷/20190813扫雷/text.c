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
	char mine[ROWS][CLOS] = { 0 };   //�����
	char mineInfo[ROWS][CLOS] = {0};    //�Ų���

	InitBoard(mine, ROWS, CLOS, '0');//����׵ľ���   1������
	InitBoard(mineInfo, ROWS, CLOS, '*');//����õľ���
	ShowBoard(mineInfo, ROW, CLO);//��ӡ����

	SetMine(mine, ROW, CLO);//������
	//ShowBoard(mine, ROW, CLO);
	FindMine(mine, mineInfo, ROW, CLO);//�������
}
int main()
{
	int input=0;	
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("����������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}