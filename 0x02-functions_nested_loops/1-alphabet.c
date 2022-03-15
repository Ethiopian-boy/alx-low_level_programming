#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, lowercase
 * You can only use _putchar twice in your code
 * Return: nothing.
 */

void print_alphabet(void)
{
	int lw = 'a';

	while (lw <= 'z')
	{
		_putchar(lw);
		lw += 1;
	}
	_putchar('\n');
}
