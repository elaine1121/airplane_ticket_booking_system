#include "Flight.h"

Flight::Flight(string a, string fNo, string fr, string t, int s) {
    airline = a;
    flightNo = fNo;
    from = fr;
    to = t;
    seats = s;
}

string Flight::getAirline() { return airline; }
string Flight::getFlightNo() { return flightNo; }
string Flight::getFrom() { return from; }
string Flight::getTo() { return to; }
int Flight::getSeats() { return seats; }

bool Flight::bookSeat() {
    if (seats > 0) {
        seats--;
        return true;
    }
    return false;
}

void Flight::cancelSeat() {
    seats++;
}