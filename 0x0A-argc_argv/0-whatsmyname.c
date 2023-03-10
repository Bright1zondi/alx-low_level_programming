#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: number of argument
 * @argv: argument vector (array of arguments)
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
