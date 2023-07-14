#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - 'Print the last digite of the number stored in the variable'
  *Return: Always 0 (success)
  */

int main(void)
{
	int n;

	n = 98;
	printf("Last digit of %d is %d and is ", n, n % 10);

	if
		((n % 10) > 5);
	{
	printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	n = -98;
	printf("Last digit of %d is %d and is ", n, n % 10);

	if
		((n % 10) < 5);
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	n = 980;
	printf("Last digit of %d is %d and is ", n, n % 10);

	if
		((n % 10) == 0)
	{

		printf("the last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}
