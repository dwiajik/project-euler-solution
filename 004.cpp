#include <iostream>
#include <string>

int main()
{
	int result = 0;
	for (int i = 999; i >= 900; i--)
	{
		for (int j = 999; j >= 900; j--)
		{
			bool palindrome = true;
			std::string s = std::to_string(i * j);
			for (int a = 0; a < s.length() / 2; a++)
			{
				if (s[a] != s[(s.length() - 1) - a])
				{
					palindrome = false;
					break;
				}
			}
			
			if (palindrome)
			{
				if (i * j > result)
				{
					result = i * j;
				}
			}
		}
	}
	
	std::cout << result;
}
