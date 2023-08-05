#pragma once

public ref class Flight {
protected:
	int flightId;
	System::String^ destination;
	System::DateTime departureTime;
	int rows;
	int cols;
	float price;
public:
	Flight(System::String^, System::DateTime, int, int, float);
	int getFlightId();
	System::String^ getDestination();
	System::DateTime getDepartureTime();
	int getRows();
	int getCols();
	float getPrice();
};
