#pragma once
//--------------------------------------------------------------------------------------
//Author: David Greenberg
//DESC: Generalized utility class containing functions utilized across multiple classes
//
//--------------------------------------------------------------------------------------

#include <stdlib.h>
#include <math.h>
#include <string>
#include<vector>

using namespace std;

class util
{
public:
	util();
	~util();
	
	//*******************************************
	// Random Number Functions
	//*******************************************

	//Returns
	inline int RandInt(int x, int y){
		return rand() % (y - x + 1) + x;
	}

	//return a random float between 0 and 1
	inline double RandFloat() {
		return (rand()) / (RAND_MAX + 1.0);
	}

	
	//returns a random bool
	inline bool RandBool()
	{
		if (RandInt(0, 1)) return true;

		else return false;
	}
	
	//Returns a random float in the range -1 < n < 1
	inline double RandomClamped(){
		return RandFloat() - RandFloat();
	}
};

