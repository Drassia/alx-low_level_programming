#include <main.h>
/**
  * print_alphabet - Entry point
  *
  * Return: Always 0 (success)
  */
void print_alphabet(void)
{
	int al;

	for (al = 97; al <= 122; al++)
	{
		putchar(al);
		putchar('\n');
	}
	return (0);
}
