#include <iostream>
#include <string>
using namespace std;

class Train {
private:
    string passengerName;
    int age;
    int seatNo;
    bool booked;

public:
    Train() {
        booked = false;
    }

    void bookTicket() {
        if (booked) {
            cout << "\nTicket already booked!\n";
            return;
        }

        cout << "\nEnter Passenger Name: ";
        cin.ignore();
        getline(cin, passengerName);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Seat Number: ";
        cin >> seatNo;

        booked = true;

        cout << "\nTicket Booked Successfully!\n";
    }

    void cancelTicket() {
        if (!booked) {
            cout << "\nNo ticket booked.\n";
            return;
        }

        booked = false;
        cout << "\nTicket Cancelled Successfully!\n";
    }

    void displayTicket() {
        if (!booked) {
            cout << "\nNo ticket booked.\n";
            return;
        }

        cout << "\n----- TICKET DETAILS -----\n";
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Age            : " << age << endl;
        cout << "Seat Number    : " << seatNo << endl;
        cout << "Train Name     : Express Train" << endl;
    }
};

int main() {
    Train t;
    int choice;

    do {
        cout << "\n===== TRAIN TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Display Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                t.bookTicket();
                break;

            case 2:
                t.cancelTicket();
                break;

            case 3:
                t.displayTicket();
                break;

            case 4:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
