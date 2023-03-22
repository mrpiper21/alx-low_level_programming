#include "main.h"
/**
 * main - Entry point
 * Description: print lowercase alphabets
 * Return: Aways 0
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
