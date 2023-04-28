#include <stdio.h>
/**
 * exec_before_main - fonction that print before main
 * Return: nothing
 */
void exec_before_main(void) __attribute__((constructor));
void exec_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
