#include "main.h"
/*
 * _strlen_recursion - a prototype that returns the lenght of a string
 * @s: The string to be checked
 */

int _strlen_recursion(char *s) {
  if(*s == '\0') {
    return 0;
  }
  return 1 + _strlen_recursion(s + 1);
}
