#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: displays lowercase of alphabets
 * Returns - returns 0
 */
int main(void)
{
	int c = 97;
	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
