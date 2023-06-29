#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: value to be inputted
 * @s2: value to be inputted
 *Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

