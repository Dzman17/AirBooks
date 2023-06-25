#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Account {
protected:
	string username;
	string password;
	string name;
	int CCNumber;
	bool valid;
	char role;

public:
	Account(string username, string password);
	string getUsername();
	string getPassword();
	bool authenticate(string username, string password);
	char getRole();
	void createAccount(string username, string password);
};

Account::Account(string username1, string password1) {
	username = username1;
	password = password1;
}

string Account::getUsername() {
	return username;
}

string Account::getPassword() {
	return password;
}

bool Account::authenticate(string username, string password) {
	
	ifstream fin("usernames.txt");
	string fusername, fpassword;

	while (fin) {
		getline(fin, fusername, ',');
		getline(fin, fpassword);
		if (fusername == username && fpassword == password)
			return true;
	}
	return false;
}

char Account::getRole()
{
	return 0;
}

void Account::createAccount(string username, string password)
{
	ofstream fout;
	fout.open("usernames.txt", ios_base::app);
	fout << username << "," << password << endl;
}

int main() {

	string usernameInput;
	string passwordInput;
	int choice=0;

	while (choice != 1 && choice != 2) {
		cout << "1. Login" << endl;
		cout << "2. make account" << endl;
		cin >> choice;
	}

	if (choice == 1) {
		cout << "Please enter your username" << endl;
		cin >> usernameInput;
		cout << "Please enter your password" << endl;
		cin >> passwordInput;
		Account user(usernameInput, passwordInput);
		if (user.authenticate(usernameInput, passwordInput)) {
			cout << "login successful" << endl;
		}
		else
			cout << "login unsucessful" << endl;
	}
	else {
		cout << "Enter username" << endl;
		cin >> usernameInput;
		cout << "Enter password" << endl;
		cin >> passwordInput;
		Account user(usernameInput, passwordInput);
		user.createAccount(usernameInput, passwordInput);
	}
	

	

	return 0;
}
