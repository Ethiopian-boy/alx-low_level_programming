#include <stdio.h>

/**
 * main - program that prints all possible different combinations of
 * three digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Return: 0
 */

int main(void)
{
int n1 = 48;
int n2, n3;

while (n1 <= 57)
{
n2 = n1 + 1;
while (n2 <= 57)
{
n3 = n2 + 1;
while (n3 <= 57)
{
putchar(n1);
putchar(n2);
putchar(n3);
if (n1 != 55 || n2 != 56 || n3 != 57)
{
putchar(44);
putchar(32);
}
n3 += 1;
}
n2 += 1;
}
n1 += 1;
}
putchar('\n');
return (0);
}
