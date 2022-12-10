#include <stdio.h>

/**
 * main - Program to print combination of two 2 digit numbers,
 * separated by commas
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			if (b != a)
			{
				putchar(a / 10);
				putchar(a % 10);
				putchar(' ');
				putchar(b / 10);
				putchar(b % 10);

				if (a < 98)
				{
					putchar(',');
					putchar(' ');
				}
				else
					continue;
			}
		}
	}
	putchar('\n');

	return (0);
}
