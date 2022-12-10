#include <stdio.h>

/**
 * main - Proogram to print out all of the alphabet in lowercase
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);
	putchar('\n');

	return (0);
}
