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

    System::String^ email = "email";
    System::String^ password = "password";
    System::String^ fName = "fName";
    System::String^ lName = "lName";
    System::String^ destination = "home";
    DateTime^ time = gcnew DateTime(1200, 01, 01, 00, 00, 00);

    int flightID = 10, seatID = 5, rows = 25, columns = 6, price = 500;
    double luggageMax = 50, currentLuggage = 0;


    Account^ aTest = gcnew Account(email, password, fName, lName, 'c');
    Flight^ fTest = gcnew Flight(flightID, (System::DateTime)time, destination, rows, columns, price, luggageMax, currentLuggage);
    Ticket^ tTest = gcnew Ticket(flightID, seatID, email);
    DBHandler DBHTest;

    if (DBHTest.createAccount((AirBooksDBHandler::Account)aTest))
        cout << "yes\n";
    Account^ account = DBHTest.getAccountInfo(email, password);
    System::Console::WriteLine(account->email);
    System::Console::WriteLine(DBHTest.findNewFlightID());
    fTest = DBHTest.getFlight(1);
    System::Console::WriteLine(fTest->destination);
}