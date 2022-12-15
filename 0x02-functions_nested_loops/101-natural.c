#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to add all multiples of 3 and 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3 == 0) || (i % 5 == 0)) && i != 1024)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
