#include <stdio.h>
#include <unistd.h>

/**
 * main - Program to print a quote
 *
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 65);
	return (1);
}
