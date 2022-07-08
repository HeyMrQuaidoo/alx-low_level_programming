#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints all anything.
 * @format: the format type to print
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, curr = 0;
	char *str;
	const char format_arr[] = "cifs";
	va_list vlist;

	va_start(vlist, format);
	while (format && format[i])
	{
		j = 0;
		while (format_arr[j])
		{
			if (format[i] == format_arr[j] && curr)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vlist, int)), curr = 1;
				break;
			case 'i':
				printf("%d", va_arg(vlist, int)), curr = 1;
				break;
			case 'f':
				printf("%f", va_arg(vlist, double)), curr = 1;
				break;
			case 's':
				str = va_arg(vlist, char *), curr = 1;
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		} i++;
	}
	printf("\n");
	va_end(vlist);
}
