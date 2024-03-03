#include "main.h"

/**
 * specs - Prints characters according to specifications
 * @s: Conversion specifier
 * @arg: Argument
 * Return: 0
 */

int specs(char s, va_list arg)
{
	unsigned int i;
	int specs;

	specs[] = {
		{"c", print_char}
		{"d", print_int}
		{"i", print_int}
		{"s", print_str}
	};

	for (i = 0; specs[i] != NULL; i++)
	{
		if (specs[i] == s)
			return (specs[i + 1]);

/**
 * _printf - Produces output according to a format.
 * @format: The format designating what should be produced.
 * Return: Number of characters printed, excluding NULL byte.
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	va_list arg;

	va_start (arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
