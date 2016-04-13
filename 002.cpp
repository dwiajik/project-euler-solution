#include<iostream>

int main()
{
	int a = 1, b = 2;
	int sum = 0;
	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		b = b + a;
		a = b - a;
	}
	printf("%d", sum);
}
