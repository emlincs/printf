#include "main.h"

void print_buffer(char buffer[], int *buff_indx);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_indx = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_indx++] = format[i];
			if (buff_indx == BUFF_SIZE)
				print_buffer(buffer, &buff_indx);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_indx);
			flags = grab_flags(format, &i);
			width = grab_width(format, &i, list);
			precision = grab_precision(format, &i, list);
			size = grab_size(format, &i);
			++i;
			printed = grip_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_indx);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_indx: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_indx)
{
	if (*buff_indx > 0)
		write(1, &buffer[0], *buff_indx);

	*buff_indx = 0;
}

