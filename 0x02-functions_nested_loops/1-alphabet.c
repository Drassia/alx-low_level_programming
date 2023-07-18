#include <main.h>
/**
  * print_alphabet - Entry point
  *
  * Return: Always 0 (success)
  */
void print_alphabet(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		putchar(al);
		putchar('\n');
	}
	return (0);
}
