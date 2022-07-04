#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ argv){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VetPro::Login form;
	Application::Run(% form);
}