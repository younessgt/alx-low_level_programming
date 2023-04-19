#include "3-calc.h"
/**
 * get_op_func -  function that selects the correct function
 * then perform the operation entred by the user
 * @s: pointer to character
 * Return: pointer to function or NULL if it fails to match
 * any of the flowing operators (+, -, *, /, %)
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0 && s[1] == '\0' && s != NULL)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
