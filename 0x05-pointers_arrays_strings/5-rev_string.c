#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 * Return: returns the reversed string
 */

void rev_string(char *s)
{
	char reve = s[0];
	int mount = 0;
	int c;

	while (s[mount] != '\0')
	mount++;
	for (c = 0; c < mount; c++)
	{
		mount--;
		reve = s[1];
		s[1] = s[mount];
		s[mount] = reve;
	}
}
