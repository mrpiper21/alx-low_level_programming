#include <stdio.h>
/**
 *main - initialize enntry point
 *Description: 'prints all the numbers of base 16 in lowercase'
 *Return: returns the value 0
 */
int main(void)
{
	int b = 48;
	int a = 97;

	while (b <= 57)
	{
		putchar(b);
		b++;
	}
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
