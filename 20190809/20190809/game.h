#ifndef       ___GAME_H__
#define      ___GAME_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void initboard(char arr[][3], int row, int col);
void ShowBoard(char arr[][3], int row, int col);
void PlayerMove(char arr[][3], int row, int col);
char iswin(char arr[][3], int row, int col);
//static int IsFull(char arr[][3], int row, int col);
void ComputerMove(char arr[][3], int row, int col); 
#endif  // ___GAME_H__
