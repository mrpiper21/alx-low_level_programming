#include "main.h"
/**
 * print_most_numbers - Entry point
 * @c: character to be computed
 */

void print_most_numbers(void)
{
	int c = 48;
	while (c <= 57)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
