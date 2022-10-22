#include "main.h"

/**
 * print_ptr - print address of value
 * @list: argument list
 * @length: length
 * Return: length
 */

int print_ptr(va_list list, int length)
{
	int i = 0;
	char *str = "(nil)";
	unsigned long ptr = va_arg(list, unsigned long);

	if (!ptr)
	{
		for (i = 0; str[i]; i++, length++)
			_putchar(str[i]);

		return (length);
	}

	length += _putchar('0');
	length += _putchar('x');
	length += print_numbers(ptr, 16, "0123456789abcdef");

	return (length);
}
