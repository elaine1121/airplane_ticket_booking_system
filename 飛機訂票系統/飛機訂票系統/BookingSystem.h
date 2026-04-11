#ifndef BOOKINGSYSTEM_H
#define BOOKINGSYSTEM_H

#include "Flight.h"
#include <vector>
#include <string>
using namespace std;

class BookingSystem {
private:
    vector<Flight> flights;

public:
    void addFlight(Flight f);
    void viewFlights();

    void viewFlightsByAirline(string airline);

    bool bookTicketByAirline(string airline, string flightNo);
    bool cancelTicketByAirline(string airline, string flightNo);
};

#endif
