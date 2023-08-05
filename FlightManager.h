#pragma once

#include <vector>

public ref class FlightManager
{
public:
	//vector<Flight> flights;
	FlightManager();
	vector<Flight> getFlights(std::string, System::DateTime, System::DateTime);
	void addFlight(std::string, System::DateTime, int, int, float);
	void cancelFlight();
	void changeFlightTime();
};