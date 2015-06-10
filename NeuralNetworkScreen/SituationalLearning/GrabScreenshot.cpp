#include "GrabScreenshot.h"


GrabScreenshot::GrabScreenshot()
{


}

void GrabScreenshot::screenData(HWND windowPointer){
	//Create a container rectangle for the size of the application window
	LPRECT rectangle = LPRECT();

	

	if (GetWindowRect(windowPointer,OUT rectangle)){//The rectangle representing the screen has been retrieved
		//Get the graphics of the image
		


	}
}
