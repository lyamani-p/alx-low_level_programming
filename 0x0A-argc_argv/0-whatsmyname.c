#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: always zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
(void) argc;
printf("%s\n", *argv);

return (0);
}
