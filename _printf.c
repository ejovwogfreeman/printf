#include "main.h"

/**
 * print_checker - function to check which specifier to print
 * @format: string being passed
 * @pr_array: array of struct ops
 * @list: list of arguments to print
 * Return: number of chararters to be printed
 */
int print_checker(const char *format, fmt_t *pr_array, va_list list)
{
	char a;
	int count = 0, b = 0, c = 0;
	
	a = format[b];
	while (a != '\0')
	{
		if (a == '%')
		{
			c = 0;
			b++;
			a = format[b];
			while (pr_array[c].type != NULL &&
					a != *(pr_array[c].type))
				c++;
			if (pr_array[c].type != NULL)
				count = count + pr_array[c].f(list);
			else
			{
				if (a == '\0')
					return (-1);
				if (a != '%')
					count += _putchar('%');
				count += _putchar(a);
			}
		}
		else
			count += _putchar(a);
		b++;
		a = format[b];
	}
	return (count);
}

/**
 * _printf - prints output according to format being passed
 * @format: string being passed
 * Return: characters to be printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int a = 0;
	
	fmt_t ops[] = {
		{"c", ch},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(list, format);
	a = print_checker(format, ops, list);
	va_end(list);
	return (a);
}
