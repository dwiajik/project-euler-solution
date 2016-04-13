#include <iostream>
#include <cmath>

bool isPrime(long number)
{
	if (number == 2) return true;
	for (int i = 2; i < sqrt(number) + 1; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	unsigned long long sum = 0;
	for (long i = 2; i < 2000000; i++)
	{
		if (isPrime(i))
		{
			sum += i;
		}
	}
	std::cout << sum;
}
