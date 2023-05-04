#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @b: string to encode
 * Return: encoded string
 */
char *leet(char *b)
{
int l, u;
char check[] = "aAeEoOtTlL";
char change[] = "4433007711";

for (l = 0; *(b + l) != '\0'; l++)
{
for (u = 0; check[u]; u++)
if (check[u] == *(b + l))
{
*(b + l) = change[u];
break;
}
}
return (b);
}
