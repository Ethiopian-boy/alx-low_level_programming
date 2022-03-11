#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
int x = 'a';
while (x <= 'z')
{
putchar(x);
x += 1;
}
putchar('\n');
return (0);
}
