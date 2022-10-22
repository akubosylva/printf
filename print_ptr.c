#include "main.h"

/**
 * print_ptr - print address of value
 * @list: argument list
 * @length: length
 * Return: length
 */

int print_ptr(va_list list, int length __attribute__((unused)))
{
	int i = 0;
	char *str = "(nil)";
	unsigned long address;
	void *ptr = va_arg(list, void *);

	if (ptr == NULL)
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);

		return (i);
	}

	address = (unsigned long)ptr;
	i += _putchar('0');
	i += _putchar('x');
	i += print_numbers(address, 16, "0123456789abcdef");

	return (i);
}
