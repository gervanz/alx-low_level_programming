#include <stdio.h>

/**
 * main - Program to print single digits from 0 to 9
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
