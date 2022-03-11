#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse.
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
int l = 'z';
while(l >= 'a')
{
putchar(l);
l -= 1;
}
putchar('\n');
return (0);
}
