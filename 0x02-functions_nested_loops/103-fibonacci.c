#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, i, j, tmp, sum;

	i = sum = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		tmp = i + j;
		i = j;
		j = tmp;
		if (tmp % 2 == 0 && tmp < 4000000)
		{
			sum += tmp;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
