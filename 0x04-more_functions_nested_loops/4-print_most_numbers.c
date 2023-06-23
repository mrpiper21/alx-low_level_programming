#include "main.h"
#include "stdio.h"
/**
 * print_most_numbers - Entry point
 * @c: character to be computed
 */

void print_most_numbers(void)
{
	int c;
	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
