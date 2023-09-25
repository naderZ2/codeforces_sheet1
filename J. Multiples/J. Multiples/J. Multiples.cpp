#include <iostream>

using namespace std;

int main() {
    // Declare variables to store the input values.
    int a, b;

    // Read the input values from the console.
    cin >> a >> b;

    // Check if A is a multiple of B or vice versa.
    if (a % b == 0 || b % a == 0) {
        cout << "Multiples" << endl;
    }
    else {
        cout << "No Multiples" << endl;
    }

    return 0;
}
