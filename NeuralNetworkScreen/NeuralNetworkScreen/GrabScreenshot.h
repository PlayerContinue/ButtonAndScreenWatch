#pragma once
//--------------------------------------------------------------------------------------
//Author: David Greenberg
//DESC: Contains a the method of retrieve the graphical data from the system
//
//--------------------------------------------------------------------------------------
#using <System.dll>
#using <System.Drawing.dll>
using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;



class CGrabScreenshot
{
public:
	CGrabScreenshot();
	~CGrabScreenshot();

	//Retrieve the process Information
	//Required to collect information from the process
	static void retrieveWindow();


	
};

