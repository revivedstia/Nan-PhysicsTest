#include "HomeForm.h"
//#include "LoginForm.h"
//#include "SigninForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PhysicsTest::HomeForm form;
	Application::Run(% form);
}
 