#ifndef   _GAME_H_
#define   _GAME_H_
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define    MINE_NUM    10

#define   ROW 9
#define   CLO 9

#define   ROWS   ROW+2
#define   CLOS    CLO+2


void InitBoard(char board[][CLOS], int rows, int cols, char set);

void ShowBoard(char board[][CLOS], int row, int col);
void SetMine(char mine[][CLOS], int row, int col);
void FindMine(char mine[][CLOS], char mineInfo[][CLOS], int row, int col);


#endif// _GAME_H_