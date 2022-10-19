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
	char *str = "(null)";
	unsigned long address;
	void *ptr = va_arg(list, void *);

	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			length++;
			_putchar(str[i]);
		}
		return (length);
	}

	address = (unsigned long)ptr;
		length += _putchar('0');
		length += _putchar('x');
		length += print_numbers(address, 16, "0123456789abcdef");

	return (length);
}
