#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives on a new line
 *
 * @argc: Argument count
 * @argv: Argument value
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
