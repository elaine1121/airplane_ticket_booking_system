#include "Booking.h"

Booking::Booking(string name, string air, string fNo) {
    passengerName = name;
    airline = air;
    flightNo = fNo;
}

string Booking::getPassengerName() { return passengerName; }
string Booking::getAirline() { return airline; }
string Booking::getFlightNo() { return flightNo; }