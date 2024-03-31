#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - printf function
 *
 * @format: formatted string
 * Return:   total number of outputted characters
 */
int _printf(const char *format, ...)
{
    int i, j, count;
    va_list list;
    set arguments[] = {
        {'c', print_char},
        {'d', print_d},
        {'i', print_d},
        {'s', print_str},
    };

    if (format == NULL)
        return (-1);

    va_start(list, format);
    count = 0;

    while (*format != '\0')
    {
        if (*format != '%')
        {
            write(1, format, 1);
            count++;
        }
        else
        {
            switch (*++format)
            {
            case 'd':
                count += fprintf(1, "%d", va_arg(args, int));
                break;
            case 'c':
                count += fprintf(1, "%c", va_arg(args, int));
                break;
            case 's':
                count += fprintf(1, "%s", va_arg(args, char *));
                break;
            case 'f':
                count += fprintf(1, "%f", va_arg(args, double));
                break;
            default:
                write(1, "%", 1);
                write(1, format, 1);
                count += 2;
                break;
            }
        }
        format++;
    }
    va_end(list);
    return (count);
}
