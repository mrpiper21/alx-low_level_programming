#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: the string
 * Return: length
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\10')
	{
		lenght++;
		s++;
	}
	return (lenght);
}

