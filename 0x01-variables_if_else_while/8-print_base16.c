#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int num = '0';
	char chr = 'a';

	for (; num <= '9'; num++)
		putchar(num);
	for (; chr <= 'f'; chr++)
		putchar(chr);
	putchar('\n');

	return (0);
}
