#include <stdio.h>
#include <string.h>
/**
 * main - Entry point to the code
 * Discription: 'displays lowercase aphabets'
 * Returns: - returns 0
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
