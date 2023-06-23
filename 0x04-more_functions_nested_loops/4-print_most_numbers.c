#include "main.h"
/**
 * print_most_numbers - Entry point
 * @c: character to be computed
 */

void print_most_numbers(void)
{
	for (int c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
