#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>
using namespace std;

class Flight {
private:
    string airline;     // 航空公司
    string flightNo;    // 航班號
    string from;        // 出發地
    string to;          // 目的地
    int seats;          // 座位數

public:
    Flight(string a, string fNo, string fr, string t, int s);

    string getAirline();
    string getFlightNo();
    string getFrom();
    string getTo();
    int getSeats();

    bool bookSeat();
    void cancelSeat();
};

#endif              // 結束條件編譯