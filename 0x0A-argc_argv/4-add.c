#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - A program that adds positive numbers
 *
 * @argc: Argument counter
 * @argv: Argument values
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num, i = 0, summ = 0;

	while (argc-- > 1)
	{
		for (; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[argc]);
		summ += num;
	}

	printf("%d\n", summ);

	return (0);
}
