#include "main.h"
/**
 * print_ptr - print address of value
 * @list: argument list
 * @length: length
 * Return: length
 */
int print_ptr(va_list list, int length)
{
	char *str;
	unsigned long int dec, buffr;
	char c[100];
	int count, n, i = 0, j;

	dec = (unsigned long int)va_arg(list, void*);
	str = "(nil)";

	buffr = dec;
	count = 1;
	if (!dec)
	{
		for (i = 0; str[i] != '\0'; i++, length++)
			_putchar(str[i]);
		return (length);
	}
	while (buffr)
	{
		buffr /= 16;
		count++;
	}
	c[count + 1] = '\0';
	while (dec > 0)
	{
		n = (dec % 16);
		if (n >= 0 && n <= 9)
			c[count] = ((char)(n + '0'));
		else
			c[count] = ((char)(n + 'W'));
		count--;
		dec /= 16;
	}
	c[0] = '0';
	c[1] = 'x';
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++, length++;
	}
	return (length);
}
