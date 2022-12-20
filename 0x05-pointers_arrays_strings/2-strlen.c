#include "main.h"
/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: the lenght of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_puts(str[i]);
		i++;
	}
	_putchar('\n');
}
