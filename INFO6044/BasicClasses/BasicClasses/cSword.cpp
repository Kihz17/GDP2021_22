#include "cSword.h"
#include <iostream>


void cSword::Swing(void)
{
	std::cout << "Swish! Swish! Clang! Clang!" << std::endl;
	std::cout << "Die vile devil!!" << std::endl;
	std::cout << "My sword is " << this->Length << " cm long" << std::endl;
	return;
}


void cSword::TakeDamage(float amount)
{
	if (amount > 6.0f)
	{
		this->Sharpness++;
	}
	return;
}
