#pragma once

public ref class User {
protected:
	AirBooksDBHandler::Account^ account;
	int CCNumber;
	bool valid;
public:
	User(System::String^ email, System::String^ password);
	User(System::String^ first, System::String^ last, System::String^ email, System::String^ password, char type);
	void setFirstName(System::String^ name);
	void setLastName(System::String^ name);
	void setEmail(System::String^ email);
	void setPassword(System::String^ password);
	System::String^ getName(int mode);
	System::String^ getEmail();
	System::String^ getPassword();
	AirBooksDBHandler::Account^ getAccount();
	bool authenticate();
	bool validateEmail();
	bool createUser();
};
