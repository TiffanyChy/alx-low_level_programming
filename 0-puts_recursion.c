#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
char *str = s;

if (*str != '\0')
{
_putchar(*str);
str++;
_puts_recursion(str);
}
else
_putchar('\n');
}
