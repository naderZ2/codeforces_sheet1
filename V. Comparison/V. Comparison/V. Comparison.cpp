#include <iostream>

using namespace std;

int main() {
    // Declare variables to store the input values.
    int a, b;
    char s;

    // Read the input values from the console.
    cin >> a >> s >> b;

    // Check if the comparison symbol is right.
    switch (s) {
    case '<':
        if (a < b) {
            cout << "Right" << endl;
        }
        else {
            cout << "Wrong" << endl;
        }
        break;
    case '>':
        if (a > b) {
            cout << "Right" << endl;
        }
        else {
            cout << "Wrong" << endl;
        }
        break;
    case '=':
        if (a == b) {
            cout << "Right" << endl;
        }
        else {
            cout << "Wrong" << endl;
        }
        break;
    default:
        cout << "Invalid comparison symbol" << endl;
        return 1;
    }

    return 0;
}
