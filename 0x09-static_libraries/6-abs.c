#include "main.h"
/**
 *_abs - function that computes the absolute value of an integer
 *@n: this the int that we will check
 *Return: -n (if negative) n if positive
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
