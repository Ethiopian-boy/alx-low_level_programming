#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer to char
 * Return: char
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char *let = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	while (*(s + i) != '\0')
	{
		while (*(let + j) != '\0')
		{
			if (*(s + i) == *(let + j))
			{
				*(s + i)  = *(r13 + j);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
