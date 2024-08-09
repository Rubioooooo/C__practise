#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("********************************************\n");
	printf("***************  1、开始游戏  **************\n");
	printf("***************  0、退出游戏  **************\n");
	printf("********************************************\n");
	printf("是否开始游戏(1/0):>");
}

void game()
{
	char board[ROW][COL] = { 0 };
	init_board(board,ROW,COL);
	print_board(board,ROW,COL);

}
int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入:>");
			break;
		}
	} while (input);
	return 0;
}