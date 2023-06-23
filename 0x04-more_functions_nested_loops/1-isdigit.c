#include "main.h"

/**
 * _isdigit - checks if c is within 0 - 9
 * @c: character to be chectked
 * Return: Returns 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
