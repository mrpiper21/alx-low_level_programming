#include <stdio.h>
/**
 *main - Enter to the code
 *Decription: 'excludes e and q from lowercase alphabets'
 *Return: returns the value 0
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
		if (c == 101 || c == 113)
		{
			c++;
			continue;
		}
	}
	putchar('\n');
	return (0);
}
