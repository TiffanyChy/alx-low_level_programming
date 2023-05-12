#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: num of command line arguments, size of argv array
 * @argv: array containing command line arguments of the program
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
int l, u, ans;

if (argc != 3)
{
printf("Error\n");
return (1);
}

l = atoi(argv[1]);
u = atoi(argv[2]);
ans = l *u;

printf("%d\n", ans);

return (0);
}
