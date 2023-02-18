#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);
	putchar('\n');
	return (0);
}
