#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: num of command line arguments, size of argv array
 * @argv: array containing program command line arguments
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
