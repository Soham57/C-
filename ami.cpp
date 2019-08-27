// Problem 7 Amicable Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<cmath>
#include <iostream>

int div_sum(int const number)
{
	int result = 1;
	for (int i = 2; i <= std::sqrt(number); i++)
	{
		if (number % i == 0)
		{
			result += (i == (number / i)) ? i : (i + number / i);
		}
	}
	return result;
}
int main()
{
	std::cout << "Enter a limit\n>";
	  int sum=1 ,s1=1, limit = 0;
	std::cin >> limit;
	for (  int iter = 220; iter < limit; iter++)
	{
		sum = div_sum(iter);
		s1 = div_sum(sum);
		if (iter == s1)
		{
			std::cout << iter << "   " << sum << "\n";
		}
	}
	return 0;
}
