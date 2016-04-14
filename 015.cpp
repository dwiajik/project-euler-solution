#include <iostream>

unsigned long long goDeep(int x, int y)
{
	if (x == 20 || y == 20) 
	{
		return 1;
	}
	else
	{
		return goDeep(x + 1, y) + goDeep(x, y + 1);
	}
}

int main()
{
	std::cout << goDeep(0, 0);
}
