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
	firstName = "";
	lastName = "";
	this->email = email;
	this->password = password;
}

// TODO: COMMIT SETTERS TO DATABASE
// firstName setter
void User::setFirstName(System::String^ name) {
	firstName = name;
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
	ifstream fin("credentials.txt");
	string ffirst, flast, femail, fpassword;

	while (fin) {
		getline(fin, femail, ',');
		getline(fin, fpassword, ',');
		getline(fin, ffirst, ',');
		getline(fin, flast);
		if (marshal_as<System::String^>(femail) == email && marshal_as<System::String^>(fpassword) == password) {
			firstName = marshal_as<System::String^>(ffirst);
			lastName = marshal_as<System::String^>(flast);
			return true;
		}
	}
	return false;
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