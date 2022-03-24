#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: Pointer to Char
 * Return: char.
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *let = "aAeEoOlLtT";
	char *num = "4433001177";

	while (*(s + i) != '\0')
	{
		while (*(let + j) != '\0')
		{
			if (*(s + i) == *(let + j))
				*(s + i)  = *(num + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
