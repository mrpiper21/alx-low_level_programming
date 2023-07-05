#include "main.h"
/*
 * _print_rev_recursion - A prototupe the reverses a string
 * @s: String to be reversed
 */

void _print_rev_recursion(char *s) {
     if(*s == '\0') {
        return;
     }
     _print_rev_recursion(s+1);
     putchar(*s);
}
