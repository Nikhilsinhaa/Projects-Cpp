#include <iostream>
using namespace std;

int main() {
    char operatorType;
    double x, y, result;

    cout << "Calculator\n";
    cout << "Enter the first number: ";
    cin >> x;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operatorType;

    cout << "Enter the second number: ";
    cin >> y;

    switch (operatorType) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y == 0) {
                cout << "Error: Division by zero is not allowed.\n";
                return 1;
            }
            result = x / y;
            break;
        default:
            cout << "Error: Invalid operator.\n";
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
