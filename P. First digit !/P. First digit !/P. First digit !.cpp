#include <iostream>

using namespace std;

int main() {
    // Declare a variable to store the input number.
    int x;

    // Read the input number from the console.
    cin >> x;

    // Extract the first digit of the number.
    int firstDigit = x / 1000;

    // Check if the first digit is even.
    if (firstDigit % 2 == 0) {
        cout << "EVEN" << endl;
    }else {
        cout << "ODD" << endl;
    }

    return 0;
}
