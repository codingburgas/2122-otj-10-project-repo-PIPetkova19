#include "MyForm.h"
#include <iostream>
#include <fstream>


using namespace System;
using namespace System::Windows::Forms ;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	loginForm::MyForm frm;
	Application::Run(% frm);
}