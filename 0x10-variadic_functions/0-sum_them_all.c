#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all parameters
 * @n:parameters
 * @...: Calculate the sum of this
 *
 * Return:if n == 0 - 0
 *	or-the some of all parameters
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list par;

	unsigned int i, sum = 0;

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(par, int);
	}

	va_end(par);

	return (sum);
}
