#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 1 if little endian else 0
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned int *p = &n;

	if (*p)
		return (1);
	else
		return (0);
}
