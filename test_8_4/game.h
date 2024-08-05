#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//头文件中声明函数
//初始化表格
void init_board(char board[ROW][COL], int row, int col);


//打印函数
void print_board(char board[ROW][COL], int row, int col);


//玩家下棋，输入坐标（1—3之间，以x,y的形式）
void player_move(char board[ROW][COL], int row, int col);


//电脑下棋，随机坐标
void computer_move(char board[ROW][COL], int row, int col);


//判断是否满格
int is_full(char board[ROW][COL], int row, int col);


//判断输赢
char is_win(char board[ROW][COL], int row, int col);





















