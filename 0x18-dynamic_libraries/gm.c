#include <stdio.h>
#include <stdarg.h>
/**
 * printf - s
 * @format: s
 * Return: s
 */
int printf(const char *format, ...)
{
	const char *mod_format = "Congratulations, you win the Jackpot!\n";
	int result;
	va_list args;

	va_start(args, format);
	result = vprintf(mod_format, args);
	va_end(args);
	return (result);
}
