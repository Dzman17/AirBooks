#include "Main.h"

#include <iostream>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace AirBooksDBHandler;

void static testDBH();

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AirBooks::Main form;
	form.closeManageTab();

	Application::Run(% form);
	

	testDBH();
}

void static testDBH() {
	System::String^ email = "email";
	System::String^ password = "password";
	System::String^ fName = "fName";
	System::String^ lName = "lName";
	System::String^ destination = "home";
	DateTime^ time = gcnew DateTime(1200, 01, 01, 00, 00, 00);

	int flightID = 10, seatID = 5, rows = 25, columns = 6, price = 500;
	double luggageMax = 50, currentLuggage = 0;


	Account^ aTest = gcnew Account(email, password, fName, lName);
	Flight^ fTest = gcnew Flight(flightID, (System::DateTime)time, destination, rows, columns, price, luggageMax, currentLuggage);
	Ticket^ tTest = gcnew Ticket(flightID, seatID, email);
	DBHandler DBHTest;

	bool testCreation = true, search = false;
	if (testCreation) {
		DBHTest.createAccount((AirBooksDBHandler::Account)aTest);
		DBHTest.addFlight((AirBooksDBHandler::Flight)fTest);
		DBHTest.addTicket((AirBooksDBHandler::Ticket)tTest);
	}
	else {
		DBHTest.deleteAccount((AirBooksDBHandler::Account)aTest);
		DBHTest.cancelFlight(flightID);
		DBHTest.cancelTicket((AirBooksDBHandler::Ticket)tTest);
	}

	Ticket^ ticket;
	for (int i = 0; i < 2; i++) {
		ticket = DBHTest.getTicket(email, i);
		Console::WriteLine(ticket->ownerEmail + ", flight:" + ticket->flightID + ", seat:" + ticket->seatID);
	}
}
