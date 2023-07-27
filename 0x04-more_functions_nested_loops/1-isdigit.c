#include "main.h"
/**
 * checks for a digit
 * c is the char we'll check
 * return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
