#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stddef.h>

/**
 * struct linda - struct for lindas
 * @x: x
 * @eat: pointer to function
 */

typedef struct linda
{
	char x;
	void (*eat)();
} linda;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
ssize_t write(int fd, const void *buf, size_t count);

#endif /* _VARIADIC_FUNCTIONS_H_ */
