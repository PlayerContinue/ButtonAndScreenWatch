#pragma once
//-----------------------------------------------
//Author: David Greenberg
// DESC: The main brain of the unit. Updates the current
// weights of the button
//-----------------------------------------------


#include <vector>

using namespace std;
class CBrain
{
public:
	CBrain();
	~CBrain();


	vector<double> update();
};

