#include <stdio.h>
#include "main.h"

/**
 * leet - Encodes a string with LEET
 *
 * @s: String whose characters are to be encoded
 *
 * Return: LEET encoded string
 */

char *leet(char *s)
{
	char *code = s;
	int i = 0, j;
	char str[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char enc[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (code[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (code[i] == str[j])
				code[i] = enc[j];
		}

		i++;
	}

	return (code);
}
