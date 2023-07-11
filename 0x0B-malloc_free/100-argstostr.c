#include "main.h"
#include <stdlib.h>
/**
 * argstostr - A main entry function
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, b = 0, l = 0;
	char *st;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	st = malloc(sizeof(char) * l + 1);
	if (st == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		st[b] = av[i][n];
		b++;
	}
	if (st[b] == '\0')
	{
		st[b++] = '\n';
	}
	}
	return (st);
}
