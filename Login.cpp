#include "Login.h"

#include <iostream>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;


int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AirBooks::Login form;

	Application::Run(% form);
}
