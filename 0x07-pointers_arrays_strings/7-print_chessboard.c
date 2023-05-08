#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 8 x 8 array
 */
void print_chessboard(char (*a)[8])
{
int l, u = 0;

for (l = 0; l < 8; l++)
{
_putchar(a[u][l]);
if (l == 7 && u < 7)
{
u++;
l = -1;
_putchar('\n');
}
}
_putchar('\n');
}
