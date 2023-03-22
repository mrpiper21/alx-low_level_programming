#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit num
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
	{
	j = j * -1;
	}
	_putchar(j + '0');
	return (j);
}
