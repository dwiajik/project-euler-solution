#include <iostream>

int main()
{
	unsigned long long count = 0;
	unsigned long long result = 0;
	
	for (unsigned long long i = 1; i < 1000000; i++)
	{
		unsigned long long countTemp = 0;
		unsigned long long temp = i;
		while (true)
		{
			countTemp++;
			
			if (countTemp > count)
			{
				count = countTemp;
				result = i;
			}
			
			if (temp == 1)
			{
				break;
			}
			
			if (temp % 2 == 0)
			{
				temp = temp / 2;
			}
			else
			{
				temp = (temp * 3) + 1;
			}
		}
	}
	
	std::cout << result;
}
