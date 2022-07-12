#ifndef MAIN_H
#define MAIN_H



int _putchar(char c);

int _printf(const char *format, ...);

void print_string(char *str);
void print_int_helper(int n);
void print_char(va_list ap);
void print_str(va_list ap);
void print_percent_sign(va_list ap);
void print_int(va_list ap);

#endif
