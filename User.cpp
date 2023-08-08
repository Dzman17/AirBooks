#include "User.h"
#include <iostream>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

using namespace msclr::interop;
using namespace std;
using namespace AirBooksDBHandler;

// Account constructor
User::User(System::String^ first, System::String^ last, System::String^ email, System::String^ password, char type) {
	this->account = gcnew AirBooksDBHandler::Account(email, password, first, last, type);
}

// Account constructor (email and password only)
User::User(System::String^ email, System::String^ password) {
	this->account = gcnew AirBooksDBHandler::Account(email, password, "", "", 'c');
}

// TODO: COMMIT SETTERS TO DATABASE
// firstName setter
void User::setFirstName(System::String^ name) {
	AirBooksDBHandler::DBHandler dbHandler;
	account->firstName = name;
}

// lastName setter
void User::setLastName(System::String^ name) {
	AirBooksDBHandler::DBHandler dbHandler;
	account->lastName = name;
}

// email setter
void User::setEmail(System::String^ newEmail) {
	AirBooksDBHandler::DBHandler dbHandler;
	account->email = newEmail;
}

// password setter
void User::setPassword(System::String^ newPassword) {
	AirBooksDBHandler::DBHandler dbHandler;
	account->password = newPassword;
}

// name getter (0 whole, 1 first, 2 last)
System::String^ User::getName(int mode) {
	switch (mode) {
	case 0:
		return account->firstName + " " + account->lastName;
	case 1:
		return account->firstName;
	case 2:
		return account->lastName;
	default:
		return account->firstName + " " + account->lastName;
	}

}

// email getter
System::String^ User::getEmail() {
	return account->email;
}

// password getter
System::String^ User::getPassword() {
	return account->password;
}

// account getter
AirBooksDBHandler::Account^ User::getAccount() {
	return account;
}

// Checks if user object fields match one in the system
bool User::authenticate() {
	AirBooksDBHandler::DBHandler dbHandler;
	User^ temp = gcnew User(getEmail(), getPassword());
	temp->account = dbHandler.getAccountInfo(account->email, account->password);
	if (temp->account->email == "none")
		return false;
	else
		account->firstName = temp->account->firstName;
		account->lastName = temp->account->lastName;
		account->accountType = temp->account->accountType;
		return true;
}

// Checks if the email is already in use
bool User::validateEmail() {
	AirBooksDBHandler::DBHandler dbHandler;
	return !dbHandler.checkEmail(account->email);
}

// Commits user fields to system
bool User::createUser() {
	AirBooksDBHandler::DBHandler dbHandler;
	return dbHandler.createAccount((AirBooksDBHandler::Account)account);
}
