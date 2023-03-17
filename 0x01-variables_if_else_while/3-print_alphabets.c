#include <stdio.h>
/**
 * main - Entry point 
 * Return: 0 
 */
int main(void)
{
	int i;
	int num = 55;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i =0; i < num; i++)
	{
		if (alpha[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(alpha[i]);
                        
	}
return (0);
}
