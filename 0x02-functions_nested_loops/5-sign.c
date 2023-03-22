#include "main.h"
/**
 * _print_sign - print the sign of a number
 * Decription: print sign of given conditions
 * @n: The number to be checked
 * Return: 1 for positive num, -1 for negative num else 0
 */
int _print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
