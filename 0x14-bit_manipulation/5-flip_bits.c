#include "main.h"
/**
 * flip_bits - function that returns the number of flips nedeed
 * to get from number to another number
 * @n: the first number
 * @m: the second number
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int max;
	unsigned int flip = 0;

	if (n > m)
		max = n;
	else
		max = m;
	while (max)
	{
		if ((n & 1) == (m & 1))
		{
			n = n >> 1;
			m = m >> 1;
		}
		else
		{
			n = n >> 1;
			m = m >> 1;
			flip++;
		}
		max = max >> 1;
	}
	return (flip);
}
