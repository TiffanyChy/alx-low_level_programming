#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n of elements of a array of integer
 * @a: array
 * @n: length of array
 */
void print_array(int *a, int n)
{
int c = 0;

for (; c < n; c++)
{
printf("%d", *(a + c));
if (c != (n - 1))
printf(", ");
}
printf("\n");
}
