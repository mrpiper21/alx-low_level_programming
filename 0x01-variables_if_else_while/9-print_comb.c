#include <stdio.h>
/**
 *main - initialize entry point
 *Description:  'prints all possible combinations of single-digit numbers'
 *Return: returns 0
 */
int main(void)
{
	int s;

	for (s = 48; s <= 57; s++)
	{
		putchar(s);
		if (s == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
