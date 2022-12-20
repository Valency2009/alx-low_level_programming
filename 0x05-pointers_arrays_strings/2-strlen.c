#include "main.h"
/**
 * _strlen - prints a string
 * @s: the string
 * Description: this will return the lenght of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
