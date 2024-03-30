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

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}

	return (count);
}
