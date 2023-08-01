#include "Main.h"

#include <iostream>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;


int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AirBooks::Main form;

	Application::Run(% form);
}
