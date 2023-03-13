#include "main.h"
#include <ctype>

/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */

char *leet(char *str)
{
	int b; = strlen(str), i, j;
	
	char *alpha = "aAeEoOtTlL";
	char *symbol = "4433007711"

	for (i = 0; i < b; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = symbol[j];
			}
		}
	}
	return (str);
}
