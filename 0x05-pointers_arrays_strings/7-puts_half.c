#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
int w, h;
w = 0;

while (str[w] != '\0')
w++;
h = (w) / 2;
if (w % 2 != 0)
h = ((w - 1) / 2) + 1;
for (; h < w; h++)
_putchar(str[h]);
_putchar('\n');
}
