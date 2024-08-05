#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家下棋
void player_move(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋，请输入坐标:>");
	
	while (1)
	{
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("该点已被使用，请重新输入坐标:>\n");
		}
		else
		{
			printf("坐标非法，请重新输入:>");
		}
	}
}

//电脑下棋
void computer_move(char board[ROW][COL], int row, int col)
{
	
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//是否满格
int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 1;
		}
	}
	return 0;
}

//判断输赢
char is_win(char board[ROW][COL], int row, int col)
{
	//一行三个
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return board[i][0];
	}
	//一列三个
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j])
			return board[0][j];
	}
	//斜对角三个
	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]))
		return board[0][0];
	if ((board[0][2] == board[1][1] && board[1][1] == board[2][0]))
		return board[0][2];
	return 'C';

}





















































