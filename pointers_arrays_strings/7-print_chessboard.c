#include "main.h"

/**
 *print_chessboard - A function that prints a chessboard.
 *@a: the board to be printed.
 *
 *Return: an 8*8 board.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
