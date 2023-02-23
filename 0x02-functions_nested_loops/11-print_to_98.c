#include "main.h"
/**
 * prints all natural numbers from n to 98, followed by a new line.
 * it will be in order and seperated by commas
*/
void print_to_98(int n);
{
		if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
