#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers
 *
 * @argc: Argument count
 * @argv: Argument value
 *
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	int n1, n2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		prod = n1 * n2;
		printf("%d\n", prod);
		return (0);
	}
}
