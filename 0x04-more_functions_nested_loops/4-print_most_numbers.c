#include "main.h"
/**
 * print_most_numbers - Entry point
 * @c: character to be computed
 */

void print_most_numbers(void)
{
	for (c = '0'; c < '10'; c++)
	{
		_putchar(c)
		if (c == '2' || c == '4')
		{
			continue;
		}
	}
	_putchar('\n');
}
