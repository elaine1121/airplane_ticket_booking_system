#include <iostream>
#include "Flight.h"
#include "BookingSystem.h"
using namespace std;

int main() {
    BookingSystem system;

    // ===== 建立航班 =====
    system.addFlight(Flight("EVA", "BR123", "Taipei", "Tokyo", 10));
    system.addFlight(Flight("EVA", "BR456", "Taipei", "Seoul", 8));
    system.addFlight(Flight("China", "CI789", "Taipei", "Bangkok", 12));
    system.addFlight(Flight("China", "CI321", "Taipei", "Singapore", 6));

    int choice;
    string airline, flightNo;

    do {
        cout << "\n====== 飛機訂票系統 ======\n";
        cout << "1. 查看所有航班\n";
        cout << "2. 依航空公司查看航班\n";
        cout << "3. 訂票\n";
        cout << "4. 取消訂票\n";
        cout << "5. 離開\n";
        cout << "請選擇: ";
        cin >> choice;

        switch (choice) {
        case 1:
            system.viewFlights();
            break;

        case 2:
            cout << "輸入航空公司: ";
            cin >> airline;
            system.viewFlightsByAirline(airline);
            break;

        case 3:
            cout << "輸入航空公司: ";
            cin >> airline;
            cout << "輸入航班號: ";
            cin >> flightNo;

            if (system.bookTicketByAirline(airline, flightNo))
                cout << "訂票成功！\n";
            else
                cout << "訂票失敗！\n";
            break;

        case 4:
            cout << "輸入航空公司: ";
            cin >> airline;
            cout << "輸入航班號: ";
            cin >> flightNo;

            if (system.cancelTicketByAirline(airline, flightNo))
                cout << "取消成功！\n";
            else
                cout << "取消失敗！\n";
            break;

        case 5:
            cout << "離開系統\n";
            break;

        default:
            cout << "輸入錯誤\n";
        }

    } while (choice != 5);

    return 0;
}