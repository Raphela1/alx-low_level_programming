#include <stdio.h>

/**
 * main - this is a program that prints lowercase alphabets
 * Return: Always 0
 */

int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
