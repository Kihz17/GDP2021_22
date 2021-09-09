#include <iostream>
#include <string>

#include "cSword.h"

int main(int argc, char* argv[])
{
	cSword mySword;

	mySword.Length = 10.0f;		// Floating point
	mySword.Material = "gold";	

	std::cout << "Length = " << mySword.Length << std::endl;
	std::cout << "Material = " << mySword.Material << std::endl;

	mySword.Swing();

	return 0;
}



