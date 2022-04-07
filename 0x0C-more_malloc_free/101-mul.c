#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - Converts a character array to an integer
 * @s: character array to convert
 * Return: returns integer from array, returns 0 if none found
 */
int _atoi(char *s)
{
int retval, i, neg;
i = 0;
retval = 0;
neg = -1;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
neg *= -1;
i++;
}
while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
retval = (retval * 10) - (s[i++] - '0');
return (retval *neg);
}
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
int a, b, i, j;
unsigned long mul;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{
printf("Error\n");
exit(98);
}
}
}
a = _atoi(argv[1]);
b = _atoi(argv[2]);
mul = a *b;
printf("%lu\n", mul);
return (0);
}
