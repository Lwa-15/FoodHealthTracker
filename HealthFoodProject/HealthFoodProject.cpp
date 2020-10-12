#include "pch.h" //Includes the pre-compiled files
//Lines 4-19 and the general setup of using Windows Forms are adapted from the video "c++ empty CLR Windows Form visual studio 2017"

using namespace System; //The following namespace declarations (Lines 4-9) are for using the system and allowing for the creation of a GUI 
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

[STAThreadAttribute]
int main(array<System::String ^> ^args) //This function begins the creation of the first form, initialised on Line 16
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    HealthFoodProject:: Login form; //Sets the form which is going to load first
    Application::Run(% form); //Runs the application
    return 0;
}
