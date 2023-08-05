#include "Flight.h"


// constructor
Flight::Flight(System::String^ destination, System::DateTime departureTime, int rows, int cols, float price) {
	this->destination = destination;
	this->departureTime = departureTime;
	this->rows = rows;
	this->cols = cols;
	this->price = price;
}

// flight id getter
int Flight::getFlightId() {
	return flightId;
}

// destination getter
System::String^ Flight::getDestination() {
	return destination;
}

// departure time getter
System::DateTime Flight::getDepartureTime() {
	return departureTime;
}

// rows getter
int Flight::getRows() {
	return rows;
}

// cols getter
int Flight::getCols() {
	return cols;
}

// price getter
float Flight::getPrice() {
	return price;
}