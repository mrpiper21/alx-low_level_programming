#include "main.h"
/**
 * puts2 -  function that prints every other character of a string,
 *  starting with the first character, followed by a new line.
 * @str: input
 * Return: the print
 */

void puts2(char *str)
{
	int lenght = 0;
	int c = 0;
	char *a = str;
	int b;

	while (*a != '\0')
	{
		a++;
		lenght++;
	}
	c = lenght - 1;
	for (b = 0; b <= c; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}
