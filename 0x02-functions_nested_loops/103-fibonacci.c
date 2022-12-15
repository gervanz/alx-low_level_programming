#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print Fibonacci even numbers less than 4x10**6
 * starting with 1 & 2
 *
 * Return: 0
 */

int main(void)
{
	int sum = 0, i;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	sum += fib[1];

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];

		if ((fib[i] < 4000000) && (fib[i] % 2 == 0))
			sum += fib[i];
	}

	printf("%d\n", sum);

	return (0);
}
