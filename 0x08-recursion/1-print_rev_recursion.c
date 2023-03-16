#include "main.h"

/*
 * _print_rev_recursion - print the recursion in reversr
 * @s: string
 */

void _print_rev_recursion(char *s);
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s)
	}
}
