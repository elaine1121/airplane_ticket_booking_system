#ifndef BOOKING_H
#define BOOKING_H

#include <string>
using namespace std;

class Booking {
private:
    string passengerName;
    string airline;
    string flightNo;

public:
    Booking(string name, string air, string fNo);

    string getPassengerName();
    string getAirline();
    string getFlightNo();
};

#endif