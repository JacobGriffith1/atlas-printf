#include "main.h"
#include <stddef.h>

/**
 * specCheck - Prints characters according to specifications
 * @s: Conversion specifier.
 * @arg: Argument containing text to be printed.
 * Return: Command to run; as dictated by the argument.
 */

int specCheck(char s, va_list arg)
{
	int i;

	specStruct specList[] = {
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"s", print_str},
		{NULL, NULL}
	};

	for (i = 0; specList[i].spec != NULL; i++)
	{
		if (specList[i].spec[0] == s)
			return (specList[i].func(arg));
	}
	return (0);
}

/**
 * _printf - Produces output according to a format.
 * @format: The format designating what should be produced.
 * Return: Number of characters printed, excluding NULL byte.
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int printCount = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printCount++;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			printCount++;
			i++;
		}
		if (format[i + 1] == '\0')
			return (-1);

		printCount += specCheck(format[i], arg);
	}
	va_end(arg);
	return (printCount);
}
