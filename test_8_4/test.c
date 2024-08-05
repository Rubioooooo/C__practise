#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("********  1����ʼ  *********\n");
	printf("********  0������  *********\n");
	printf("****************************\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	char board[ROW][COL];
	init_board(board,ROW,COL);
	print_board(board,ROW,COL);
	while (1)
	{
		player_move(board, ROW, COL);
		char ret = is_win(board, ROW, COL);
		if (ret == '*')
		{
			print_board(board, ROW, COL);
			printf("��һ�ʤ\n");
			break;
		}
		int ret1 = is_full(board, ROW, COL);
		if (ret1 == 0)
		{
			print_board(board, ROW, COL);
			if (ret == 'C')
			{
				printf("ƽ��\n");
				break;
			}
		}
		computer_move(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret == '#')
		{
			print_board(board, ROW, COL);
			printf("���Ի�ʤ\n");
			break;
		}
		int ret2 = is_full(board, ROW, COL);
		if (ret2 == 0)
		{
			print_board(board, ROW, COL);
			if (ret == 'C')
			{
				printf("ƽ��\n");
				break;
			}
		}
		print_board(board, ROW, COL);

	}


}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("��ѡ���Ƿ������Ϸ(1/0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����������\n");
		}
	} while (input);
	return 0;
}
