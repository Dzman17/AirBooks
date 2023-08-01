#include "Account.h"
#include <iostream>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

using namespace msclr::interop;
using namespace std;

// Account constructor
Account::Account(System::String^ first, System::String^ last, System::String^ email, System::String^ password) {
	this->firstName = first;
	this->lastName = last;
	this->email = email;
	this->password = password;
}

// Account constructor (email and password only)
Account::Account(System::String^ email, System::String^ password) {
	firstName = "";
	lastName = "";
	this->email = email;
	this->password = password;
}

// TODO: COMMIT SETTERS TO DATABASE
// firstName setter
void Account::setFirstName(System::String^ name) {
	firstName = name;
}

// lastName setter
void Account::setLastName(System::String^ name) {
	lastName = name;
}

// email setter
void Account::setEmail(System::String^ newEmail) {
	email = newEmail;
}

// password setter
void Account::setPassword(System::String^ newPassword) {
	password = newPassword;
}

// name getter (0 whole, 1 first, 2 last)
System::String^ Account::getName(int mode) {
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
System::String^ Account::getEmail() {
	return email;
}

// password getter
System::String^ Account::getPassword() {
	return password;
}

// Checks if account object fields match one in the system
bool Account::authenticate() {
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
bool Account::validateEmail() {
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

// account role getter (placeholder)
char Account::getRole() {
	return 0;
}

// Commits account fields to system
void Account::createAccount() {
	ofstream fout;
	fout.open("credentials.txt", ios_base::app);
	// helper vars for unstable marshal cast
	System::String^ implicitEmail = this->email;
	System::String^ implicitPass = this->password;
	System::String^ implicitFirst = this->firstName;
	System::String^ implicitLast = this->lastName;
	// write to file as email,password,firstName,lastName
	fout << marshal_as<std::string>(implicitEmail) << "," << marshal_as<std::string>(implicitPass) << "," << marshal_as<std::string>(implicitFirst) << "," << marshal_as<std::string>(implicitLast) << endl;
	fout.close();
}