#include <iostream>

using namespace std;

int main() {
    // Declare variables to store the input values.
    long long a, b, c, d;

    // Read the input values from the console.
    cin >> a >> b >> c >> d;

    // Calculate the products AB and CD.
    long long ab = a * b;
    long long cd = c * d;

    // Check if AB is greater than CD.
    if (ab > cd) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
