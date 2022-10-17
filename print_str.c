#include "main.h"

/**
 * print_str - prints input as string to stdout
 * @list: Argument list
 * @length: length of input
 * Return: length
 */

int print_str(va_list list, int length)
{
	int i;
	const char *str = va_arg(list, const char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++, length++)
		_putchar(str[i]);
	return (length);
}
