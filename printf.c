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
	int i = 0;
	char *buffer;

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
		buffer[i] = format[i];
		i++;
	}
	buffer[i] = '\0';
	write(1, buffer, strlen(buffer));
	va_end(ap);
	free(buffer);
	return (i);
}

