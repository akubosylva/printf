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

	_putchar(c);
	length++;
	return (length);
}
