#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("********************************************\n");
	printf("***************  1����ʼ��Ϸ  **************\n");
	printf("***************  0���˳���Ϸ  **************\n");
	printf("********************************************\n");
	printf("�Ƿ�ʼ��Ϸ(1/0):>");
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
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������:>");
			break;
		}
	} while (input);
	return 0;
}