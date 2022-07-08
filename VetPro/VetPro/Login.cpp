#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ argv){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VetPro::Login form;
	Application::Run(% form);
}