#include <stdio.h>

/**
 * main - Program to print combination of 3 digits,
 * the third always larger than the second which in
 * turn is always larger than the first
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				if ((c != b) && (b != a) && (c != a))
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a < '7')
					{
						putchar(',');
						putchar(' ');
					}
					else
						continue;
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
