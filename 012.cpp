#include <iostream>
#include <cmath>

int main()
{
	unsigned long long count = 1, result = 0;
	
	while (true)
	{
		int divisorCount = 0;
		
		result += count;
		
		for (int i = 1; i <= sqrt(result) + 1; i++)
		{
			if (result % i == 0)
			{
				if (i * i != sqrt(result))
				{
					divisorCount += 2;
				}
				else
				{
					divisorCount++;
				}
			}
		}
		
		if (divisorCount > 500)
		{
			break;
		}
		
		count++;
	}
	
	std::cout << result;
}
