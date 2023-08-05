#include "FlightManager.h"

#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;
using namespace System;

struct Flight
{
public:
	int flightID;
	System::String^ location;
	System::DateTime flightTime;
	int rows;
	int cols;
	float price;
};

// constructor
FlightManager::FlightManager() {

}

// retrieves all flights from the database using the search parameters
vector<Flight> FlightManager::getFlights(std::string destination, System::DateTime minTime, System::DateTime maxTime) {
	vector<Flight> flights;

	// query the database using the three search parameters to fill the flights vector

	return flights;
}

// adds a flight
void FlightManager::addFlight(std::string destination, System::DateTime departureTime, int rows, int cols, float price) {
	//Create flight object
	Flight newFlight;

	newFlight.location = destination;
	newFlight.flightTime = departureTime;

	

	//Open file
	ofstream out;
	out.open("flightList.txt", ios::out | ios::app);

	//THIS IS FOR FLIGHT ID, REPLACE WITH DATABASE FLIGHT ID
	//Count lines
	int numLines = 0;
	string line;
	ifstream in("flightList.txt");
	while (getline(in, line))
		++numLines;
	in.close();

	//Create string
	string addFlight = newFlight.flightTime;
	addFlight.append("," + newFlight.location);
	addFlight.append("," + to_string(numLines + 1));
	addFlight.append("," + to_string(newFlight.rows));
	addFlight.append("," + to_string(newFlight.cols));
	addFlight.append("," + to_string(newFlight.price));
	
	//Append string to file
	out << addFlight << endl;
	out.close();

	return;
};

// deletes a flight
void FlightManager::cancelFlight() {
	//REMOVE AFTER FINDING FIX
	vector<Flight> flights;

	//Open file
	ifstream in;
	in.open("flightList.txt");

	//Get List of flights
	string line;
	while (getline(in, line)) {

		Flight flight;

		flight.flightTime = line.substr(0, line.find(","));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.location = line.substr(0, line.find(","));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.flightID = stoi(line.substr(0, line.find(",")));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.rows = stoi(line.substr(0, line.find(",")));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.cols = stoi(line.substr(0, line.find(",")));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.price = stoi(line.substr(0, line.find(",")));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flights.push_back(flight);
	}

	//Print flights to select one
	int i = 0;
	for (Flight flight : flights) {
		i++;
		cout << "\t" << "Flight" << "\t" << "Time" << "\t\t" << "Location" << "\t\t" << "ID" << "\t" << "Rows" << "\t" << "Columns" << "\t" << "Price" << endl;
		cout << "\t" << i << "\t" << flight.flightTime << "\t\t" << flight.location << "\t\t\t" << flight.flightID << "\t" << flight.rows << "\t" << flight.cols << "\t" << flight.price << endl;
	}
	
	//select flight to cancel
	int select;
	cout << "Select a flight to cancel" << endl;
	cin >> select;
	cin.ignore(1, '\n');

	//Clear file
	ofstream out;
	out.open("flightList.txt", ofstream::out | ofstream::trunc);
	out.close();

	out.open("flightList.txt", ofstream::out | ofstream::app);

	//Save flights[] in text except selected
	i = 0;
	for (Flight flight : flights) {
		i++;

		if (select != i) {
			//Create string
			string addFlight = flight.flightTime;
			addFlight.append("," + flight.location);
			addFlight.append("," + to_string(flight.flightID));
			addFlight.append("," + to_string(flight.rows));
			addFlight.append("," + to_string(flight.cols));
			addFlight.append("," + to_string(flight.price));

			//Append string to file
			out << addFlight << endl;

		}
	}

	out.close();

	return;
};

// changes the scheduled time on a flight
void FlightManager::changeFlightTime() {
	//REMOVE AFTER FINDING FIX
	vector<Flight> flights;

	//Open file
	ifstream in;
	in.open("flightList.txt");

	//Get List of flights
	string line;
	while (getline(in, line)) {

		Flight flight;

		flight.flightTime = line.substr(0, line.find(","));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.location = line.substr(0, line.find(","));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.flightID = stoi(line.substr(0, line.find(",")));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.rows = stoi(line.substr(0, line.find(",")));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.cols = stoi(line.substr(0, line.find(",")));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.price = stoi(line.substr(0, line.find(",")));
		line.erase(line.begin(), line.begin() + line.find(",") + 1);

		flight.luggageMax = stod(line);

		flights.push_back(flight);
	}

	//Print flights to select one
	int i = 0;
	for (Flight flight : flights) {
		i++;
		cout << "\t" << "Flight" << "\t" << "Time" << "\t\t" << "Location" << "\t\t" << "ID" << "\t" << "Rows" << "\t" << "Columns" << "\t" << "Price" << "\t" << "Max Luggage" << endl;
		cout << "\t" << i << "\t" << flight.flightTime << "\t\t" << flight.location << "\t\t\t" << flight.flightID << "\t" << flight.rows << "\t" << flight.cols << "\t" << flight.price << "\t" << flight.luggageMax << endl;
	}

	//select flight to cancel
	int select;
	cout << "Select a flight to change" << endl;
	cin >> select;
	cin.ignore(1, '\n');

	//Input new time
	string newTime;
	cout << "Please enter new flight time (\"5/1/2008 8:30 AM\")" << endl;
	getline(cin, newTime);

	//Clear file
	ofstream out;
	out.open("flightList.txt", ofstream::out | ofstream::trunc);
	out.close();

	out.open("flightList.txt", ofstream::out | ofstream::app);

	//Save flights[] in text with edited time
	i = 0;
	for (Flight flight : flights) {

		string addFlight;
		i++;

		//Create string
		if (select != i) {
			addFlight = flight.flightTime;
		}
		else {
			addFlight = newTime;
		}
		addFlight.append("," + flight.location);
		addFlight.append("," + to_string(flight.flightID));
		addFlight.append("," + to_string(flight.rows));
		addFlight.append("," + to_string(flight.cols));
		addFlight.append("," + to_string(flight.price));
		addFlight.append("," + to_string(flight.luggageMax));

		//Append string to file
		out << addFlight << endl;
	}

	return;
};