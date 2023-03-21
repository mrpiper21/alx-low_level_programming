#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0
 */
int main(void)
{
<<<<<<< HEAD
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
=======
	int a = '0';
	int b = '0';

	for (b = '0'; b < '9'; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			if (!((a == b) || (b > a)))
			{
				putchar(b);
				putchar(a);
				if (!(a == '9' && b == '8'))
				{
>>>>>>> 0fcceb34bac24c72feceeb9c0b1d64c1c03592da
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
<<<<<<< HEAD
	putchar('\n');	
=======
	putchar('\n');

>>>>>>> 0fcceb34bac24c72feceeb9c0b1d64c1c03592da
	return (0);
}
