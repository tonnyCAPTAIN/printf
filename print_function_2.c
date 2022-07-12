#include "main.h"

/**
 * print_int_helper - helps to print int
 * @n: integer to print
 *
 */
void print_int_helper(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_int_helper(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * print_int - prints integer
 * @ap: arg
 *
 */
void print_int(va_list ap)
{
	int n;

	n = va_arg(ap, int);
	print_int_helper(n);
}
