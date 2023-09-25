#include <iostream>

using namespace std;

int main() {
    // Declare a variable to store the input value.
    double n;

    // Read the input value from the console.
    cin >> n;

    // Check if the input value is a float number.
    if (n - (int)n > 0) {
        cout << "float " << (int)n << " " << n - floor(n) << endl;
    }
    else {
        cout << "int " << (int)n << endl;
    }

    return 0;
}

