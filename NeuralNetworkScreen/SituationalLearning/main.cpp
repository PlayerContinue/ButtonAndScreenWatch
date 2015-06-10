#include "main.h"


main::main()
{
}

int main(int argc, char* argv){
	Process^ currentProcess = gcnew Process();

	//Attempt to start a new process
	try{//Attempt to start the process
		currentProcess->StartInfo->UseShellExecute = false;

		//Name the file which should be started
		currentProcess->StartInfo->FileName = "notepad.exe";
		//Where or not to create a window
		currentProcess->StartInfo->CreateNoWindow = false;
		//Launch the process
		currentProcess->Start();

		//Wait for the process to finish
		currentProcess->WaitForInputIdle();



	}
	catch (Exception^ e){//The process was unable to be started
		//Write the error message to the console
		Console::WriteLine(e->Message);
	}

	//Grab the screen infromation
	GrabScreenshot::screenData((HWND)currentProcess->MainWindowHandle.ToPointer());

}
