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
	

	char *s = va_arg(list, char*);

	if (s == NULL)
   	 {
        	s = "(null)";
    	}
	count = 0;
    	while (*s)
    	{
        count += write(1, s, 1);
        s++;
    	}


	return (count);
}
