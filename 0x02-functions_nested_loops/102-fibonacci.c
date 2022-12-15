#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print firdt 50 Fibonacci numbers
 * starting with 1 & 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long long int a = 1, b = 2, backsum;

	backsum = a + b;

	printf("%lld, %lld", a, b);

	for (i = 0; i <= 50; i++)
	{
		a = b;
		b = backsum;
		backsum = a + b;

		printf(", %lld", backsum);
}
