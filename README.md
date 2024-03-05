# This is a README file for the project _printf :page_facing_up:
created by Jacob Griffith and Tamara Walling

This project consists of the functions:
> - _printf
> - _putchar
> - print_char
> - print_int
> - print_str

Using the prototypes:
> - int _printf(const char *format, ...);
> - int _putchar(char c);
> - int print_char(va_list arg);
> - int print_int(va_list arg);
> - int print_str(va_list arg);

## Requirements

### General

> - Allowed editors: vi, vim, emacs
> - All your files will be compiled on Ubuntu 14.04 LTS
Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
> - All your files should end with a new line
> - A README.md file, at the root of the folder of the project is mandatory
> - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
> - You are not allowed to use global variables
> - No more than 5 functions per file
> - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
> - The prototypes of all your functions should be included in your header file called main.h
> - Don’t forget to push your header file
> - All your header files should be include guarded
> - Note that we will not provide the _putchar function for this project


### More Info

### Authorized functions and macros

> - write (man 2 write)
> - malloc (man 3 malloc)
> - free (man 3 free)
> - va_start (man 3 va_start)
> - va_end (man 3 va_end)
> - va_copy (man 3 va_copy)
> - va_arg (man 3 va_arg)

**Project Files**

> - _printf.c
> - _putchar.c
> - functions.c
> - main.h
> - man_3_printf

### Description
This code is a simplified version of the "printf" function in C. This code includes header files "main.h" and <stddef.h>. 
In this code, _printf prints text using an appropriate format determined by the argument. By iterating through 'specsList', a list of conversion specifiers, _printf is able to determine which conversion specifier to use by comparing the argument to a defining character in specsList. _printf is capable of printing with the %c, %d, %i, and %s conversion specifiers. 
