#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main (void)
{
	int i;
	int num = 30;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < num; i++)
	{
		if (alpha[i] == '\0')
		{
			putchar('\n');
			break;
		
		}
		if (alpha[i] != 'q' && alpha[i] != 'e')
			putchar(alpha[i]);
	
	}
return (0);
}
