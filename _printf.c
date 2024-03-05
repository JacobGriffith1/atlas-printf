#include "main.h"
#include <stddef.h>

/**
 * _printf - Produces output according to a format.
 * @format: The format designating what should be produced.
 * Return: Number of characters printed, excluding NULL byte.
 */

int _printf(const char *format, ...)
{
	unsigned int i, j, type;
	int printCount = 0;
	va_list arg;

	specStruct specList[] = {
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printCount++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == '%')
			{
				_putchar('%');
				printCount++;
			}
			for (j = 0; specList[j].spec != NULL; j++)
				if (format[i] == specList[j].spec[0])
				{
					printCount += (specList[j].func(arg));
					type = 1;
				}
			if (!type && format[i] != ' ' && format[i] != '\0' && format[i] != '%')
			{
				_putchar('%');
				_putchar(format[i]);
				printCount += 2;
			}
			type = 0;
		}
	va_end(arg);
	return (printCount);
}
