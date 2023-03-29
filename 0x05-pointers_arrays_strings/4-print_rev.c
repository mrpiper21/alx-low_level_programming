#include "main.h"
/**
 * print_rev - Prints the reverse of a string
 * @s: the string to be printed
 * Return: returns 0
 */

void print_rev(char *s)
{
	int lenght = 0;
	int c;

	while (*s != '\n')
	{
		lenght++;
		s++;
	}
	s--;
	for (c = lenght; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
