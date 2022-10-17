#include"main.h"
/**
 * _printf - print string as printf
 * @format: number of arguments
 * Return: always void
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i, count;

	count = 0;
	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
		count++;
	}
	va_end(list);
	return (result);
}



