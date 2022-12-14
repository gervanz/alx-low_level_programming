#include <stdio.h>

/**
 * main - Program to print combination of 2 digits,
 * the second always larger than the first
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			if (b != a)
			{
				putchar(a);
				putchar(b);

				if (a < '8')
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
