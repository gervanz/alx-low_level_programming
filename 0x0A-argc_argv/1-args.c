#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed
 *
 * @argc: Argument count
 * @argv: Argument value
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
