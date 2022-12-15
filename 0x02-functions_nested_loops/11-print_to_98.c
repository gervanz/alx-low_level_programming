#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print from argument to 98
 * @n: Starting number
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			else
				printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			else
				printf(", ");
		}
		printf("\n");
	}
}
