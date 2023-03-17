#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
        int i;
        int N = 9;

        for (i = 0; i <= N; i++)
        {
		putchar(i%10 + '0');
		if (i == N)
			continue;
		putchar(',');
		putchar(' ');
		}
	putchar('\n');
	}
return (0);
}
