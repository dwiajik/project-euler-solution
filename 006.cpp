#include <iostream>

int main()
{
	unsigned long long sumOfSquare = 0, squareOfSum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sumOfSquare += i * i;
		squareOfSum += i;
	}
	squareOfSum *= squareOfSum;
	
	std::cout << squareOfSum - sumOfSquare;
}
