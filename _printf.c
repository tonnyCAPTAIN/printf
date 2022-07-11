#include "main.h"

/**
 * _printf - Prints output in a given format
 * @format: A string containing characters to be printed
 * Return: total count of the characters printed
 */

int _printf(const char *format, ...)
{
	char buffer[1024];
	int i, j = 0, a = 0, *index = &a;
	va_list valist;
	vtype_t spec[] = {
		{'c', format_c}, {'d', format_d}, {'s', format_s}, {'i', format_d},
		{'u', format_u}, {'%', format_perc}, {'x', format_h}, {'X', format_ch},
		{'o', format_o}, {'b', format_b}, {'p', format_p}, {'r', format_r},
		{'R', format_R}, {'\0', NULL}
	};

	if (!format)
		return (-1);
	va_start(valist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		for (; format[i] != '%' && format[i] != '\0'; *index += 1, i++)
		{
			if (*index == 1024)
			{
				_write_buffer(buffer, index);
				reset_buffer(buffer);
				*index = 0;
			}
			buffer[*index] = format[i];
		}
		if (format[i] == '\0')

			break;
		if (format[i] == '%')
		{
			i++;
			for (j = 0; spec[j].tp != '\0'; j++)
			{
				if (format[i] == spec[j].tp)
				{
					spec[j].f(valist, buffer, index);
					break;
				}
			}
		}
	}
	va_end(valist);
	buffer[*index] = '\0';
	_write_buffer(buffer, index);
	return (*index);
}

