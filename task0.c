#include <stdio.h>

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("The factorial of %d is %d\n", number, factorial(number));

	return (0);
}

