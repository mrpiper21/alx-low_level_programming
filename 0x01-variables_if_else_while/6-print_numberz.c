#include <stdio.h>
/**
 *main - Entry point to thte code
 *Description: 'displays numbers of base 10 with putchar'
 *Return: returns 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + 48);
	}
	putchar('\n');
	return (0);
}
