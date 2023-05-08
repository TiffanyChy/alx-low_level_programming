#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer that searches a character
 * @needle: character that has to be located
 * Return: NULL if character has not been located
 */
char *_strstr(char *haystack, char *needle)
{
char *str = haystack - 1;
int l, enu;

for (l = 0; *(needle + l); l++)
;

do {
str++;
for (enu = 0; enu < l; enu++)
if (*(str + enu) != *(needle + enu))
break;
if (enu == l)
return (str);
} while (*str != '\0');

return (0);
}
