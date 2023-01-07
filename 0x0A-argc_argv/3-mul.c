#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that multiplies two numbers
 *
 * @argc: Argument counter
 * @argv: Argument values
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char **argv)
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num1 * num2;

		printf("%d\n", prod);

		return (0);
	}
}
