#include <stdio.h>
/**
 *main - Entry to the code
 *Description: 'displays lower and upercase alphabets'
 *Return: returns 0
 */
int main(void)
{
	int c = 97;
	int b = 65;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
