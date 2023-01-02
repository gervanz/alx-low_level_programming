#include <stdio.h>
#include "main.h"

/**
 * check_sep - Checks if character is a seperator
 *
 * @chr: Character
 *
 * Return: 1 if True, 0 if False
 */

int check_sep(char chr)
{
	int i = 0;
	char seperators[15] = { ' ', '\n', '\t',
		'.', ',', ';', '!', '?',
		'"', '(', ')', '{', '}' };

	for (; i < 13; i++)
	{
		if (chr == seperators[i])
			return (1);
	}

	return (0);
}



/**
 * cap_string - Capitalizes all words in string
 *
 * @str: String to be re-cased
 *
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	char *new = str;
	int j = 0;

	while (new[j])
	{
		if (new[j + 1] >= 'a' && new[j + 1] <= 'z')
		{
			new[j + 1] -= 32;
		}

		if (check_sep(new[j]) && (new[j + 1] >= 'a' && new[j + 1] <= 'z'))
		{
			new[j + 1] -= 32;
		}

		j++;
	}

	return (new);
}
