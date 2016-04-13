#include<iostream>

int main()
{
	unsigned long long number = 600851475143;
	int i;
	while (true)
	{
		for (i = 2; i < number; i++)
		{
			if (number % i == 0)
			{
				number /= i;
				break;
			}
		}
		
		if (i == number)
		{
			break;
		}
	}
	std::cout << number;
}
