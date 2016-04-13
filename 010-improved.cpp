#include <iostream>

bool isPrime(long number)
{
	if (number == 2 || number == 3)
	{
		return true;
	}
	if (number % 2 == 0 || number % 3 == 0)
	{
		return false;
	}
	
	long i = 5, w = 2;
	
	while (i * i <= number)
	{
		if (number % i == 0)
		{
			return false;
		}
		
		i += w;
		w = 6 - w;
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
