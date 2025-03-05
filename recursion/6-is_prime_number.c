#include "main.h"

/**
 *isPrime - Checks if a given is divisable
 *
 *@i: number to test is n is divisable.
 *@n: number to test if is divisable or not.
 *@lim: Limit to prevent the test is n % n == 0.
 *
 *Return: 0 if n is prime, 1 if n is not.
 */

int isPrime(int i, int n, int lim)
{
	if ((n % i == 0  && i <= lim) || n < 0 || n == 1)
		return (0);
	else if (n % i != 0 && i <= lim)
		return (isPrime(i + 1, n, lim));
	else
		return (1);
}

/**
 *is_prime_number - Test is n is prime.
 *@n: number to be tested.
 *
 *Return: 0 if n is prime, 1 if n is not.
 */

int is_prime_number(int n)
{
	return (isPrime(2, n, n - 1));
}
