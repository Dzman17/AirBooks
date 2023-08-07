#include "User.h"
#include <iostream>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

using namespace msclr::interop;
using namespace std;

// Account constructor
User::User(System::String^ first, System::String^ last, System::String^ email, System::String^ password) {
	this->account = gcnew AirBooksDBHandler::Account(email, password, first, last);
	this->dbHandler = gcnew AirBooksDBHandler::DBHandler();
	this->firstName = first;
	this->lastName = last;
	this->email = email;
	this->password = password;
}

// Account constructor (email and password only)
User::User(System::String^ email, System::String^ password) {
	this->dbHandler = gcnew AirBooksDBHandler::DBHandler();
	firstName = "";
	lastName = "";
	this->email = email;
	this->password = password;
	this->account = gcnew AirBooksDBHandler::Account(email, password, firstName, lastName);
}

// TODO: COMMIT SETTERS TO DATABASE
// firstName setter
void User::setFirstName(System::String^ name) {
	firstName = name;
	this->account = gcnew AirBooksDBHandler::Account(email, password, firstName, lastName);
	this->dbHandler = gcnew AirBooksDBHandler::DBHandler();
	dbHandler->updateAccountInfo(AirBooksDBHandler::Account());
}

// lastName setter
void User::setLastName(System::String^ name) {
	lastName = name;
}

// email setter
void User::setEmail(System::String^ newEmail) {
	email = newEmail;
}

// password setter
void User::setPassword(System::String^ newPassword) {
	password = newPassword;
}

// name getter (0 whole, 1 first, 2 last)
System::String^ User::getName(int mode) {
	switch (mode) {
	case 0:
		return firstName + " " + lastName;
	case 1:
		return firstName;
	case 2:
		return lastName;
	default:
		return firstName + " " + lastName;
	}
	
}

// email getter
System::String^ User::getEmail() {
	return email;
}

// password getter
System::String^ User::getPassword() {
	return password;
}

// account getter
AirBooksDBHandler::Account^ User::getAccount() {
	return account;
}

// Checks if user object fields match one in the system
bool User::authenticate() {
	User^ temp = gcnew User(getEmail(), getPassword());
	temp->account = dbHandler->getAccountInfo(email, password);
	System::Console::WriteLine(temp->account->email);
	if (temp->account->email == "none")
		return false;
	else
		return true;
}

// Checks if the email is already in use
bool User::validateEmail() {
	ifstream fin("credentials.txt");
	string ffirst, flast, femail, fpassword;

	while (fin) {
		getline(fin, femail, ',');
		getline(fin, fpassword, ',');
		getline(fin, ffirst, ',');
		getline(fin, flast);
		if (marshal_as<System::String^>(femail) == email) {
			return false;
		}
	}
	return true;
}

// Commits user fields to system
void User::createUser() {
	bool success = dbHandler->createAccount((AirBooksDBHandler::Account)account);
}