#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string that will be reversed
 */
void rev_string(char *s)
{
int leng, count, fin;
char star;

leng = 0;

while (s[leng] != '\0')
leng++;

leng--;
for (count = 0; count <= leng / 2; count++)
{
star = s[count];
fin = s[leng - count];
s[count] = fin;
s[leng - count] = star;
}
}
