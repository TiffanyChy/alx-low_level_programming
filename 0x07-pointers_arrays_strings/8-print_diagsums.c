#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of 2 diagonals of a square matrix
 * @a: square matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
int l = 0, rl = size - 1;
int merl = 0, merrl = 0;
int *u = a;

for (; l <= size * size; l += (size + 1), rl += (size - 1))
{
merl += *(u + l);
merrl += *(u + rl);
}
printf("%d, %d\n", merl, merrl);
}
