#include <iostream>

using namespace std;

int main() {
    // Declare a variable to store the input character.
    char c;

    // Read the input character from the console.
    cin >> c;

    // Check if the character is a digit.
    if (isdigit(c)) {
        cout << "IS DIGIT" << endl;
    }
    else {
        cout << "ALPHA" << endl;

        // Check if the character is a capital letter.
        if (isupper(c)) {
            cout << "IS CAPITAL" << endl;
        }
        else {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}
