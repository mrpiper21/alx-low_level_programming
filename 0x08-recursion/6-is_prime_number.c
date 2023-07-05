#include "main.h"
/*
 * is_prime_number - a prototype that returns 1 if the input integer is a prime number, otherwise return 0
 * @n: object instance
 * Return - returns 0 or 1
 */

int is_prime_number(int n) 
{ 
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
