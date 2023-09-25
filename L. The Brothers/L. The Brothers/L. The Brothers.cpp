#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables to store the input values.
    string f1, s1, f2, s2;

    // Read the input values from the console.
    cin >> f1 >> s1 >> f2 >> s2;

    // Check if the two people share the same second name.
    if (s1 == s2) {
        cout << "ARE Brothers" << endl;
    }
    else {
        cout << "NOT" << endl;
    }

    return 0;
}
