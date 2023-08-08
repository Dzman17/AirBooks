#include "Main.h"

#include <iostream>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace AirBooksDBHandler;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AirBooks::Main form;
	form.closeManageTab();

	Application::Run(% form);
}