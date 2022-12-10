#include <stdio.h>

/**
 * main - {rogram to print single digits from 0 to 9
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");

	return (0);
}
