#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: given number
 * @index: index to check
 * Return: the value of the bit at a given index or -1
 * if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int n1;
	unsigned int count = 0;

	n1 = n;
	while (n1)
	{
		n1 = n1 >> 1;
		count++;
	}
	if (index > count)
		return (-1);
	if (index <= count)
	{
		if (n == 0)
			return (0);
		if ((n >> index) & 1)
			return (1);
		else
			return (0);
	}
	return (index);
}
