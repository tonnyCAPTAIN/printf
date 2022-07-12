#include "main.h"

/**
 * print_string - prints strings
int print_string(char *str)
{
	int count = 0;

	for (int i = 0; str[i] != '\0'; i++){
	count += _putchar(str[i]);
	}
	return (count);
}

/**
 * print_decimal - prints decimal values
 * @n: decimal value to print
 *
 */
int print_decimal(int n)
{
	int count = 0;

	/* print '-' for negative numbers */
	if (n < 0)
	{
		count += _putchar('-');
		n = n * -1;
    	}
	if (n / 10)
		count += print_decimal(n / 10);
	count += _putchar(n % 10 + '0');

	return (count);
}
