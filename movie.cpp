#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

void displaySeats(char seats[ROWS][COLS]) {
    cout << "\nSeating Arrangement (O = Open, X = Booked):\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

void bookSeat(char seats[ROWS][COLS]) {
    int row, col;
    cout << "Enter row (0-4): ";
    cin >> row;
    cout << "Enter column (0-4): ";
    cin >> col;

    if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
        if (seats[row][col] == 'O') {
            seats[row][col] = 'X';
            cout << "Seat booked successfully!\n";
        } else {
            cout << "Sorry, this seat is already booked.\n";
        }
    } else {
        cout << "Invalid seat position.\n";
    }
}

int main() {
    char seats[ROWS][COLS];

    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = 'O';
        }
    }

    int choice;
    do {
        cout << "\n--- Movie Ticket Booking System ---\n";
        cout << "1. Display Seats\n";
        cout << "2. Book a Seat\n";
        cout << "3. Exit\n";
        switch (choice) {
            case 1:
                displaySeats(seats);
                break;
            case 2:
                bookSeat(seats);
                break;
            case 3:
                cout << "Thank you for using the system!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}

        






