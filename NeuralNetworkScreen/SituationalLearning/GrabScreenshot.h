#pragma once
//--------------------------------------------------------------------------------------
//Author: David Greenberg
//DESC: Contains function to retrieve an image from the screen
//
//--------------------------------------------------------------------------------------


#using <System.dll>
#include <Windows.h>
#include <windef.h>
#include <string>
#include <iostream>
#include <Winuser.h>
using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace std;
ref class GrabScreenshot
{
public:
	GrabScreenshot();
	
	//Retrieve the data about the screen
	static void screenData(HWND windowPointer);
};

