#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
	    putchar(c);
	    c++;
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++
	}

	return (0);
	putchar('\n');
}
