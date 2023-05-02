#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string that will be reversed
 */
void print_rev(char *s)
{
int w = 0;

while (s[w] != '\0')
w++;

w--;
while (w >= 0)
{
_putchar(s[w]);
w--;
}
_putchar('\n');
}
