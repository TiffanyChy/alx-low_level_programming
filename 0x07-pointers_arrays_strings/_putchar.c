#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _ putchar(char c)
{
return (write(1, &c, 1));
}