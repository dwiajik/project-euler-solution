#include <iostream>

int main()
{
	int result = 0;
	while (true)
	{
		result++;
		for (int i = 1; i <= 20; i++)
		{
			if (result % i != 0)
			{
				break;
			}
			
			if (i == 20)
			{
				std::cout << result;
				return 0;
			}
		}
	}
}
