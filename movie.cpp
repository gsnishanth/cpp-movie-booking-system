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
