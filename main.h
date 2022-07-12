#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include "print_functions"

/**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 */

typedef struct vtype
{
	char tp;
	void (*f)();
} vtype_t;
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *);
int print_decimal(int n);

#endif
