#include <stdio.h>
/**
 *main - Initialize entry
 *Description: 'prints the lowercase alphabet in reverse'
 *Return: returns the vaLUE 0
 */
int main(void)
{
	int R = 122;

	while (R >= 97)
	{
		putchar(R);
		R--;
	}
	putchar('\n');
	return (0);
}
