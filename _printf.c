#include "main.h"
int _printf(const char *format, ...)
{
	int i, len;
	va_list args;
	char *x;
	char *buffer;

	va_start(args, format);
	len = _strlen(format);
	buffer = malloc(sizeof(char) * BUFF_SIZE)

	for(i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				x = va_arg(args, char);
				print_buf(buffer, x);
			}
			if (format[i] == 's')
			{
				x = va_arg(args, char*);
				print_buf(buffer, x);
			}
		}
		free(buffer);
	}
	va_end(args);
	return (len);
}
