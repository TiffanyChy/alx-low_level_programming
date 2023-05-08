#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to char, string that is to be checked
 * @accept: pointer to the substring
 * Return: length of a prefix substring, unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int enu = 0, l, u;

for (l = 0; s[l] != '\0' && l == enu; l++)
for (u = 0; accept[u] != '\0'; u++)
if (s[l] == accept[u])
enu++;

return (enu);
}
