#include "io.h"

int main()
{	
	int userValue1{ getUserValue() };
	int userValue2{ getUserValue() };

	printAddition(userValue1, userValue2);
}