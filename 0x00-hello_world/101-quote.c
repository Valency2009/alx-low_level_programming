#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly and that piece of art is useful
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	write(2, "and that piece of arts is useful\" - Dora Korpar, 2015-2010-19\n", 59);
	return (1);
}
