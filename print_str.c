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

	s = va_arg(list, char*);

	 if (s == NULL)
        return (-1); 

    while (*s)
    {
        if (write(1, s, 1) == -1)
            return (-1); 
        count++;
        s++;
    }

	return (count);
}
