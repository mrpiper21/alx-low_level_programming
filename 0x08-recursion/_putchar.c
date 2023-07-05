#include <unistd.h>
/**
 * _putchar - writes the charactr c to stdout
 * @c The character to br printed
 *
 * Return On success 1
 * On erro, -1 is returned, and is set appropritely
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
