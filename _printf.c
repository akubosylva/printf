#include "main.h"

/**
  *_printf - prints formatted output.
  *@format: input.
  *Return: number of chars printed or -1.
  */

int _printf(const char *format, ...)
{
	va_list list;
	int i, length;
	int (*get_func_ptr)(va_list, int);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0, length = 0; (format && format[i]); i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				length += _putchar(format[i]);
				continue;
			}
			if (format[i] == '\0')
				return (-1);
			get_func_ptr = get_func(format[i]);
			if (get_func_ptr != NULL)
			{
				get_func_ptr(list, length);
				length++;
			}
			else
			{
				length += _putchar(format[i - 1]);
				length += _putchar(format[i]);
			}
		}
		else
			length += _putchar(format[i]);
	}
	va_end(list);
	return (length);
}
