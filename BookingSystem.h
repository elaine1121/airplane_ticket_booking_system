#ifndef BOOKINGSYSTEM_H
#define BOOKINGSYSTEM_H

#include "Flight.h"
#include "Booking.h"
#include <vector>
#include <string>
using namespace std;

class BookingSystem {
private:
    vector<Flight> flights;
    vector<Booking> bookings; // 新增

public:
    void addFlight(Flight f);
    void viewFlights();
    void viewFlightsByAirline(string airline);

    bool bookTicket(string name, string airline, string flightNo);
    bool cancelTicket(string name, string airline, string flightNo);

    void viewBookings(); // 新增
};

#endif