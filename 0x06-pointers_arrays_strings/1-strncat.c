#include "main.h"
/*
 * _strncat - concatenates two strings
 *
 * @src: the source of string
 * @dest: The destination of the string
 *
 * Return: char
 */

char *_strcat(char *dest, char *src);
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\10';
	return (s);
}
