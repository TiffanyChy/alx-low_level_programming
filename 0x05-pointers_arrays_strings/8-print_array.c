#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n of elements of a array of integer
 * @a: array
 * @n: length of array
 */
void print_array(int *a, int n)
{
int countt = 0;

while (countt < n)
{
if (countt != (n - 1))
printf("%i, ", a[countt]);
else
printf("%i, ", a[countt]);
countt++;
}
printf("\n");
}
