#include "main.h"
/*
 * _puts_recursion - prototype that prints a string
 * @s: The string to be printed
 */

void _puts_recursion(char *s) {
     if(*s == '\0') { 
        putchar('\n');
        return;
     }
     putchar(*s);
     _puts_recursion(s+1);
}
