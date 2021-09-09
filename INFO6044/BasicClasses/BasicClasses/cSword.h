#ifndef _cSword_HG_2021_09_09_
#define _cSword_HG_2021_09_09_

// or this
// #pragma once
#include <string>

class cSword
{
	float Length;			// in cm
	std::string Material;	// "gold", "iron", etc.
	int Sharpness;			// 0, 1, 2 (0 is sharpest)
	std::string Shape;		// "triangle", "slightly curved"

};

#endif
