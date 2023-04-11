#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * variadic_functions - Header file containing function prototypes
 * for working with variadic functions in C.
 */

#include <stdarg.h>
/**
 * _putchar - Writes a character to stdout.
 *
 * @c: The character to write.
 *
 * Return: On success, the number of characters written. On error, -1.
 */

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
