#include "Login.h"

//Este archivo se encarga de iniciar todo el programa
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ argv) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VetPro::Login form;
	Application::Run(% form);
}