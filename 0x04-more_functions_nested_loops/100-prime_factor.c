#include <stdio.h>
/**
 * main -  prints the largest prime factor of the number
 * Return: 0 always
 */
int main(void)
{
	long i;
	long n = 612852475143;

	for (i = 2; n > 1; i++)
	{
		while (n % i == 0)
			n = n / i;
	}
	i--;
	printf("%ld\n", i);
return (0);
}
