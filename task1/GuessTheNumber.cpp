#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    // Generating a random number
    int t;
    srand(time(0));
    t = rand() % 100 + 1;

    int n;

    while (true) {
        cout << "Guess a number (between 1 to 100): ";
        cin >> n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a valid number.\n";
        } else {
            if (n == t) {
                cout << "Congratulations! You guessed the correct number: " << t << endl;
                break;
            } else if (n < t) {
                cout << "Too low! Try again.\n";
            } else {
                cout << "Too high! Try again.\n";
            }
        }
    }

    return 0;
}
