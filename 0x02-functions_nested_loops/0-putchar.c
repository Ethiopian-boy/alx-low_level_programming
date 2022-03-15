#include <unistd.h>
#include "main.h"

/**
 * main - program that prints _putchar.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char put_char[8] = "_putchar";

	while (n < 8)
	{
		_putchar(put_char[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
