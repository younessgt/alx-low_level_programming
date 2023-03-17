#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
        int i;
        int N = 10;
        char Str[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

        for (i = 0; i < N; i++)
        {
                if (Str[i] < 9)
                {
			putchar(Str[i] + '0');
			putchar(',');
			putchar(' ');
		}
		if (Str[i] == 9)
			putchar(Str[i] + '0');
	}
return (0);
}
