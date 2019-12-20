#include <iostream>

int getUserValue()
{
	std::cout << "Enter a number :" << std::endl;

	int userValue;
	std::cin >> userValue;

	return userValue;
}

int main()
{	
	int userValue1{ getUserValue() };
	int userValue2{ getUserValue() };

	std::cout << userValue1 << " + " << userValue2 << " = " << userValue1 + userValue2<< std::endl;
}