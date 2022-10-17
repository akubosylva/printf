#include "main.h"

/**
 * print_char - print input in character format
 * @list: argument list
 * @length: length of input
 * Return: length
 */

int print_char(va_list list, int length)
{
	char c = va_arg(list, int);

	length += _putchar(c);
	return (length);
}

/**
 * print_str - prints input as string to stdout
 * @list: argument list
 * @length: length of input
 * Return: length
 */

int print_str(va_list list, int length)
{
	const char *str = va_arg(list, const char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
		length += _putchar(*str++);

		return (length);
}
