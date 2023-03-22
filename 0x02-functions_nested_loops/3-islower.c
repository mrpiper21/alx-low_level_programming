#include "main.h"
/**
 * _islower - check for lower case letters
 * @c: The chr to be checked
 * Return: returns 1 if lowercase else return 0
 */

int _islower(int c)
{
        if (c >= 97 && c <= 122)
        {
                return (1);
        }
        return (0);
}
