#include "main.h"
/**
 * print_line -  draws a straight line in the terminal
 * @n: number of lines to be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int c;

		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
