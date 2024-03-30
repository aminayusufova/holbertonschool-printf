#include "main.h"

/**
 * print_char - prints out a character
 *
 * @list:  variable list of va_list type from 'stdarg.h'
 * Return: 1
 */
int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);

	write(1, &c, 1);
	return (1);
}
