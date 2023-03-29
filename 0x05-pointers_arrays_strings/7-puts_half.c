#include "main.h"
/**
 * * puts_half - a function that prints 1/2 of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, c, lenght;

	lenght = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		lenght++;
	}

	c = (lenght / 2);

	if ((lenght % 2) == 1)
	{
		c = ((lenght + 1) / 2);
	}

	for (a = c; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

