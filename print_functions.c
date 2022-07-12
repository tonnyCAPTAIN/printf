  #include "main.h"

/**
 * print_string - Print a string tp stdout
 * @s: string to print
 *
 */
void print_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * print_char - prints a character to stdout
 * @ap: arg
 *
 * Return: number of characters
 */
void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
}

/**
 * print_str - prints a string to stdout
 * @ap: arg
 *
 */
void print_str(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	print_string(s);
}

/**
 * print_percent_sign - prints a percent sign to stdout
 * @ap: arg
 *
 */
void print_percent_sign(va_list ap)
{
	(void)ap;
	_putchar('%');
}
