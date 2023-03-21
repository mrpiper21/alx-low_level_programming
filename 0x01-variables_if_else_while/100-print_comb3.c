#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0
 */
int main(void)
{
	int a, b;
	
	for (a = 0; a < 9; a++)
	{
		for (a = 0; b <= 9; b++)
		{
			if (!((b == a) || (b > a)))
			{
				putchar(a);
				putchar(b);
				if (!(a == 9 && b == 8))
				{
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');	
	return (0);
}
