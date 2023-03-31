#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: value to be inputted
 * @s2: value to be inputted
 *Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}

