#pragma once

public ref class User {
protected:
	AirBooksDBHandler::Account^ account;
	AirBooksDBHandler::DBHandler^ dbHandler;
	System::String^ firstName;
	System::String^ lastName;
	System::String^ email;
	System::String^ password;
	int CCNumber;
	bool valid;
	char role;

public:
	User(System::String^ email, System::String^ password);
	User(System::String^ first, System::String^ last, System::String^ email, System::String^ password);
	void setFirstName(System::String^ name);
	void setLastName(System::String^ name);
	void setEmail(System::String^ email);
	void setPassword(System::String^ password);
	System::String^ getName(int mode);
	System::String^ getEmail();
	System::String^ getPassword();
	bool authenticate();
	bool validateEmail();
	char getRole();
	void createUser();
};
