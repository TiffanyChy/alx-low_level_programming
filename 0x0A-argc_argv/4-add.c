#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program that adds positive numbers
 * @argc: num of arguments in command line, size of avrg array
 * @argv: array containing command line arguments of the program
 * Return: 0 on success, on error 1.
 */
int main(int argc, char *argv[])
{
int numm, numm1, adds = 0;

for (numm = 1; numm < argc; numm++)
{
for (numm1 = 0; argv[numm][numm1]; numm1++)
{
if (argv[numm][numm1] < '0' || argv[numm][numm1] > '9')
{
printf("Error\n");
return (1);
}
}
adds += atoi(argv[numm]);
}

printf("%d\n", adds);

return (0);
}
