#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int size = 12;
	int i;
	int tabl[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < size; i++)
	{
		if (tabl[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{	
			putchar(tabl[i] + '0');

		}

	}
return (0);	
}
