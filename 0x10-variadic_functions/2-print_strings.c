#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: pointer to charcter
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
