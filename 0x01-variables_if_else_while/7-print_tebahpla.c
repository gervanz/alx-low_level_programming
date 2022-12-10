#include <stdio.h>

/**
 * main - Proogram to print out all of the alphabet in lowercase, reversed
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int chr;

	for (chr = 'z'; chr >= 'a'; chr--)
		putchar(chr);
	putchar('\n');

	return (0);
}
