#include "main.h"

/**
 * print_ptr - print address of value
 * @list: argument list
 * @length: length
 * Return: length
 */

int print_ptr(va_list list, int length)
{
	int i;
	unsigned long address;
	void *ptr = va_arg(list, void *);

	if (ptr == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (length);
	}

	address = (unsigned long)ptr;
		length += _putchar('0');
		length += _putchar('x');

	for (i = 0; i < 1; i++)
		length += print_numbers(address, 16, "0123456789abcdef");
	return (length);
}
