#include "main.h"
/* factorial - a prototype that returns the factorial of a given number
 * @n: the return value
 * Return - return the factorial number
 */
int factorial(int n) {
  if(n < 0) 
    return -1; 
  if (n == 0) 
    return 1;
  else 
    return n * factorial(n - 1); 
}
