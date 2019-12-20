#include <iostream>

int getUserValue()
{
	std::cout << "Enter a number :" << std::endl;

	int userValue;
	std::cin >> userValue;

	return userValue;
}

void printAddition(int value1, int value2)
{
	std::cout << value1 << " + " << value2 << " = " << value1 + value2 << std::endl;

}

int main()
{	
	int userValue1{ getUserValue() };
	int userValue2{ getUserValue() };

	printAddition(userValue1, userValue2);
}