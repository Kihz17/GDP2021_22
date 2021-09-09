#ifndef _cSword_HG_2021_09_09_
#define _cSword_HG_2021_09_09_

// or this
// #pragma once
#include <string>
#include <iostream>

class cSword
{
public:
	float Length;			// in cm
	std::string Material;	// "gold", "iron", etc.
	int Sharpness;			// 0, 1, 2 (0 is sharpest)
	std::string Shape;		// "triangle", "slightly curved"

	// Added to file
	float HiltColour;

	void Swing(void);

	void TakeDamage(float amount);

	void ThrowIntoGrass();
	
};

//struct cSword
//{
//	float Length;			// in cm
//	std::string Material;	// "gold", "iron", etc.
//	int Sharpness;			// 0, 1, 2 (0 is sharpest)
//	std::string Shape;		// "triangle", "slightly curved"
//};

#endif
