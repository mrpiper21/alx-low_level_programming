#include "main.h"
/**
 * _isalpha - check for lowercase letters
 * @c: The chr to be checked
 * Return: returns 1 if c is a letter, lowercase or uppercase else 0
 */

int _isalpha(int c)
{

       if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
       {
		return (1);
	}
	return (0);
}
