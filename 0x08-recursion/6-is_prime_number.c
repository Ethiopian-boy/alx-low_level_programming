#include "main.h"

int getNumPrime(int num, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input number
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getNumPrime(n, 2));
}

/**
 * getNumPrime - function that gets if num is 0 or 1
 * @num: input number
 * @i: Counter variable
 * Return: int
 */

int getNumPrime(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (getNumPrime(num, i + 1));
}
