#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned long long powered = 0;
	
	int baseNumber = 2;
	
	string result = "1";
	
	for (int i = 0; i < 1000; i++)
	{
		int carry = 0;
		
		for (int j = result.length() - 1; j >= 0; j--)
		{			
			int initialCarry = carry;
			carry = ((result[j] - '0') * baseNumber) / 10;
			result[j] = to_string(((result[j] - '0') * baseNumber + initialCarry) % 10)[0];
		}
		
		if (carry != 0)	result.insert(0, to_string(carry));
	}
	
	int sumResult = 0;
	
	for (int i = 0; i < result.length(); i++)
	{
		sumResult += (result[i] - '0');
	}
	
	cout << sumResult;
}
