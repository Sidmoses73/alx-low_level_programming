#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all parameters
 * @n:parameters
 * @...: Calculate the sum of this
 *
 * Return:if n == 0 - 0
 * or - the some of all parameters
 */

int sum_them_all(const unsigned int n, ...)

{
	unsigned int i;

	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
