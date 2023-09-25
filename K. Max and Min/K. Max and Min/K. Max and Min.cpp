#include <iostream>

using namespace std;

int main() {
    // Declare variables to store the input values.
    int a, b, c;

    // Read the input values from the console.
    cin >> a >> b >> c;

    // Find the minimum and maximum of the three numbers.
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    // Print the minimum and maximum numbers to the console.
    cout << min << " " << max << endl;

    return 0;
}
