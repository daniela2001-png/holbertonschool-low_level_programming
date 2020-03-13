#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
  * struct op - Struct op
  *
  * @op: The operator
  * @f: The function associated
  */

typedef struct op
{
	char op;
	void (*f)();
} op_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
