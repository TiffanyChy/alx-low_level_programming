#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: num of command line arguments, size of argv array
 * @argv: array containing command line arguments for the program
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int al;

for (al = 0; al < argc; ++al)
printf("%s\n", argv[al]);
return (0);
}
