#include "main.h"
/*
 * _sqrt_recursion - a prototype that returns the natural square root of a number.
 * @n: the return value
 * Return - returns the result
 */

int _sqrt_recursion(int n) {
  int i, result;
  if (n < 0) 
    return -1;  
  if (n == 0 || n == 1) 
    return n;  
      result = n;   
  for (i = 2; i * i <= n; i++) { 
    if (result > i * i) 
      result = i; 
  } 
  return result; 
}
