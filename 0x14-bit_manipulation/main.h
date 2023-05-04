#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
unsigned int binary_to_uint(const char *b);
int _strlen(const char *s);
int _pow_recursion(int x, int y);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
