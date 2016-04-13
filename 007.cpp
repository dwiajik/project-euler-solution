#include <iostream>

bool isPrime(long number)
{
	for (int i = 2; i < number; i++)
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
	int count = 1;
	int result = 3;
	while (true)
	{
		if (isPrime(result))
		{
			count++;
			
			if (count == 10001)
			{
				std::cout << result;
				return 0;
			}
		}
			
		result++;
	}
}
