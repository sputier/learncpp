#include <iostream>

int main() 
{
	// Output text in the standard output
	std::cout << "Hello world "; 

	// Clear all any error flags 
	std::cin.clear();
	// Ignore any characters in the input buffer until we find a newline
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// Get one more char from the user
	std::cin.get();

	return 0;
}

