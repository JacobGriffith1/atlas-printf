#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int specCheck(char s, va_list arg);

/**
 * struct specStruct - Structure to hold information about the print type.
 * @spec: Conversion specifier type.
 * @func: Function to print.
 */

typedef struct specStruct
{
char *spec;
int (*func)(va_list);
} specStruct;

#endif
