#ifndef HOLBERTON_H_
#define HOLBERTON_H_
#include <stdarg.h>

/**
 * struct fmt_struct - format-type class/object/struct
 * @fmt_identifier: format identifier
 * @fmt_print_func: pointer to function that prints in the format of @format
 */

struct fmt_struct
{
	char fmt_identifier;
	int (*fmt_print_func)(va_list *arg_list);
};

typedef struct fmt_struct fmt_struct_data_type;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);
#endif
