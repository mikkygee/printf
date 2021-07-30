#ifndef HOLBERTON_H_
#define HOLBERTON_H_
#include <stdarg.h>

/**
 * struct fmt_struct - format-type class/object/struct
 * @fmt_identifier: format identifier
 * @fmt_print_func: pointer to function that prints in the format of @format
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);
#endif
