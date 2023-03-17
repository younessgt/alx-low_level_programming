#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
        int i;
        int N = 30;
        char Str[] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";

        for (i = 0; i < N; i++)
        {
                if (Str[i] == '\0')
                {
                        putchar('\n');
                        break;
                }
                else
                        putchar(Str[i]);
        }
return (0);
}
