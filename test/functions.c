#include "main.h"

/**
 * print_char - Writes a character to stdout
 * @arg: Argument
 * Return: Character to be printed
 */

int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_int - Writes an integer to stdout
 * @arg: Argument
 * Return: Number of characters printed
 */

int print_int(va_list arg)
{
	unsigned int div = 1, i, digit, printCount = 0;
	int num = va_arg(arg, int);

	if (num < 0)
	{
		_putchar('-');
		printCount++;
		num *= -1;
	}

	for (i = 0; num / div > 9; i++, div *= 10)
		;

	for(; div >= 1; num %= div, div /= 10, printCount++)
	{
		digit = num / div;
		_putchar('0' + digit);
	}
	return (printCount);
}

/**
 * print_str - Writes a string to stdout
 * @arg: Argument
 * Return: Number of characters printed
 */

int print_str(va_list arg)
{
	int i, printCount = 0;
	char *str = va_arg(arg, char*);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
		printCount++;
	}
	return (printCount);
}
