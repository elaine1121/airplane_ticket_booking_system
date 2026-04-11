#include "BookingSystem.h"
#include <iostream>
using namespace std;

void BookingSystem::addFlight(Flight f) {
    flights.push_back(f);
}

void BookingSystem::viewFlights() {
    cout << "所有航班:\n";
    for (auto& f : flights) {
        cout << f.getAirline() << " "
            << f.getFlightNo() << " "
            << f.getFrom() << " -> "
            << f.getTo()
            << " Seats: " << f.getSeats() << endl;
    }
}

void BookingSystem::viewFlightsByAirline(string airline) {
    cout << airline << " 航班:\n";
    for (auto& f : flights) {
        if (f.getAirline() == airline) {
            cout << f.getFlightNo() << " "
                << f.getFrom() << " -> "
                << f.getTo()
                << " Seats: " << f.getSeats() << endl;
        }
    }
}

bool BookingSystem::bookTicketByAirline(string airline, string flightNo) {
    for (auto& f : flights) {
        if (f.getAirline() == airline && f.getFlightNo() == flightNo) {
            return f.bookSeat();
        }
    }
    return false;
}

bool BookingSystem::cancelTicketByAirline(string airline, string flightNo) {
    for (auto& f : flights) {
        if (f.getAirline() == airline && f.getFlightNo() == flightNo) {
            f.cancelSeat();
            return true;
        }
    }
    return false;
}