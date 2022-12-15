#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print 1 to 100,
 * Fizz for every multiple of 3,
 * Buzz for every multiple of 5
 * and FizzBuzz for every multiple of (3x5)
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % (3 * 5) == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
