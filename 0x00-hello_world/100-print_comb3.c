#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		b = a + 1;
		putchar(b);
		c = b + 1;
		putchar(b);
		putchar(c);
		putchar(',');
		putchar(' ');
	}

	return (0);
}
