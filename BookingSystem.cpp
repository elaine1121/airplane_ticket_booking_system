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

// 訂票（新增姓名）
bool BookingSystem::bookTicket(string name, string airline, string flightNo) {
    for (auto& f : flights) {
        if (f.getAirline() == airline && f.getFlightNo() == flightNo) {
            if (f.bookSeat()) {
                bookings.push_back(Booking(name, airline, flightNo));
                return true;
            }
        }
    }
    return false;
}

// 取消訂票
bool BookingSystem::cancelTicket(string name, string airline, string flightNo) {
    for (auto& f : flights) {
        if (f.getAirline() == airline && f.getFlightNo() == flightNo) {

            for (int i = 0; i < bookings.size(); i++) {
                if (bookings[i].getPassengerName() == name &&
                    bookings[i].getAirline() == airline &&
                    bookings[i].getFlightNo() == flightNo) {

                    f.cancelSeat();
                    bookings.erase(bookings.begin() + i);
                    return true;
                }
            }
        }
    }
    return false;
}

// 查詢所有訂單
void BookingSystem::viewBookings() {
    cout << "=== 已訂機票 ===\n";
    for (auto& b : bookings) {
        cout << "姓名: " << b.getPassengerName()
            << " | 航空公司: " << b.getAirline()
            << " | 航班: " << b.getFlightNo() << endl;
    }
}