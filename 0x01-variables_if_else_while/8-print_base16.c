#include <stdio.h>
#include <stdlib.h>
/*
 * main - return numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	int num = '0';
	char letter = 'a';

	while (num <= '9')
	while (num <= '9') /*Print 0-9*/
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')
	while (letter <= 'f') /*Print a-f*/
	{
		putchar(letter);
		letter++;
	}
}
