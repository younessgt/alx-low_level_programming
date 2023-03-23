#include <stdio.h>
/**
 * main -  Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	long j = 1;
	long k = 0;
	long s;

	for (i = 0; i < 50; i++)
	{
		s = (k + j);
		printf("%lu", s);

		k = j;
		j = s;

		if (i < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
