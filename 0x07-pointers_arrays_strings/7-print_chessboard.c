#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */


void print_chessboard(char (*a)[8])
{
	int c;
	int j;

	for (c = 0; c < 8; c++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[c][j]);
		_putchar('\n');
	}
}
