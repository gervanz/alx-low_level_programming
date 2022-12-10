#include <stdio.h>

/**
 * main - Program to print alphabet in lowercase except q and e
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		if (chr == 'e' || chr == 'q')
			continue;
		else
			putchar(chr);
	putchar('\n');

	return (0);
}
