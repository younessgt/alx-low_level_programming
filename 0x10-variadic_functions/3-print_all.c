#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: pointer to character
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'f':
				printf("%.2f", va_arg(args, double));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;

	}
	printf("\n");
	va_end(args);
}