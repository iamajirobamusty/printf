#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - a full replica of printf function
 * @string: the string to be printed
 * @...: variable args
 *
 * Return: NULL
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j = 0, b_i = 0;
	char *buffer, *p;
	char c;

	va_start(ap, format);
	while (format[i])
	{
		i++;
	}

	buffer = malloc((sizeof(char) * i) + 1);
	i = 0;
	if(!buffer)
		return (1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch(format[i + 1])
			{
				case 'c':
					c = (char) va_arg(ap, int);
					buffer = realloc(buffer, sizeof(char) * (i + 1));
					buffer[b_i++] = c;
					i++;
        	                        break;
                        	case 's':
					p = va_arg(ap, char *);
					while (p[j] != '\0')
						j++;
					buffer = realloc(buffer, sizeof(char) * (i + j + 1));
					j = 0;
					while (p[j] != '\0')
					{
						buffer[b_i++] = p[j];
						j++;
					}
					i++;
	                                break;
				case '%':
					buffer = realloc(buffer, sizeof(char) * (i + 1));
					buffer[b_i++] = '%';
					i++;
					break;

        	                default:
					buffer[b_i++] = '%';
					buffer[b_i++] = format[i];
                	                break;
                	}
		}else
		{
			buffer[b_i++] = format[i];
		}
		i++;
	}
	buffer[b_i] = '\0';
	write(1, buffer, b_i);
	va_end(ap);
	free(buffer);
	return (b_i);
}

