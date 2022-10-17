#include "main.h"

/**
 * str - prints string
 * @string: list of character making the string
 * Return: number of chars
 */
int str(va_list string)
{
	int length;
	char *str;

	str = va_arg(string, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	len = 0;
	while (str[length] != '\0')
		length = length + _putchar(str[length]);
	return (length);
}
