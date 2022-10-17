#include "main.h"

/**
 * _int - function to print integerers
 * @integer: list printed
 * Return: Return count
 */
int _int(va_list integer)
{
	int a, exponent = 1, len = 0;
	unsigned int n;

	a = va_arg(integer, int);
	if (a < 0)
	{
		len = len + _putchar('-');
		n = a * -1;
	}
	else
		n = a;
	while (n / exponent > 9)
		exponent *= 10;
	while (exponent != 0)
	{
		len = len + _putchar(n / exponent + '0');
		n = n % exponent;
		exponent = exponent / 10;
	}
	return (len);
}
