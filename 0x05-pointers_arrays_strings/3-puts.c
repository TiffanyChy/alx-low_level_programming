#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 */
void _puts(char *str)
{
int w = 0;

while (str[w] != '\0')
{
_putchar(str[w]);
w++;
}
_putchar('\n');
}
