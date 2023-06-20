#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: The initialzing number
 * Return: Always 0
 */

void print_to_98(int n)

{
	if (n <= 98)
	{
	for (; n < 99; n++)
	{
	if (n == 99)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 99; n--)
	{
	if (n == 97)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}

