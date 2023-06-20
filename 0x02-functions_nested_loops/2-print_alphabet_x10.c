#include "main.h"
/**
 * print_alphabet_x10 - print x10 of loercase alphabets
 */
void print_alphabet_x10(void)
{
	int c;
	char d;

	for (c = 0; c <= 9; c++){
		for (d = 97; d <= 122; d++){
			_putchar(d);
		}
	}
	_putchar('\n');
}
