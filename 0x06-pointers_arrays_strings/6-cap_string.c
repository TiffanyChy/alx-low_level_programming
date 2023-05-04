#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @b: string to capitalize
 * Return: capitalized words
 */
char *cap_string(char *b)
{
int l, u;
char *separators = ",;.!?\"(){} \n\t";

for (l = 0; *(b + l) != '\0'; l++)
{
if (*(b + l) >= 'a' && *(b + l) <= 'z')
for (u = 0; *(separators + u) != '\0'; u++)
{
if (*(b + l - 1) == *(separators + u))
{
*(b + l) -= 32;
break;
}
else if (l == 0)
{
*(b + l) -= 32;
break;
}
}
}
return (b);
}
