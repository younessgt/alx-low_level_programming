#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of arguments entred by the user
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int calc;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(argv[2]) != NULL)
	{
		calc = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", calc);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
