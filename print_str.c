#include "main.h"

/**
 * print_str - prints string
 *
 * @list:  variable list of type va_list of 'stdarg.h'
 * Return: int - Number of characters printed
 */
int print_str(va_list list)
{
	int count;
	char *s;

	int i = 0;
	s = va_arg(args, char*);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		count++;
	}

	return (count);
}
