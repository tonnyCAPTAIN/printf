#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct func_s - Struct func_s
 * @op: passed operator
 * @f: function to call
 */
typedef struct func_s {
	char op;
	void (*f)();
} func_t;

int _putchar(char c);

int _printf(const char *format, ...);

void print_string(char *str);
void print_int_helper(int n);
void print_char(va_list ap);
void print_str(va_list ap);
void print_percent_sign(va_list ap);
void print_int(va_list ap);

#endif
