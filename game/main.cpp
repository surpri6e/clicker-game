#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ arguments) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	game::MainForm game;
	Application::Run(% game);
	return 0;
}
